;--------------------------------
;Geoffrey ANNEHEIM
;08/08/03

;Simple exemple for PolySnd v2.0
;--------------------------------

	include		"doorsos.h"			;Incus Doorsos, ici on programme en Kernel
	include		"polysnd2.h"			;Inclus PolySnd v2.0 (ici Dynamique ASM)
	
	xdef		_ti89
	xdef		_ti92plus
	xdef		_main
	xdef		_comment
	
_main: 
 	move.w	#$0700,d0				;D�sactive toutes les interruptions
	trap	#1					;Appel routine du TIOS
	bclr.b	#2,($600001)				;Retire la protection de la table vectorielle
	move.l	$64,int1				;Sauvegarde l'adresse Int1
	move.l	$68,int2				;Sauvegarde l'adresse Int2
	move.l	#empty_handler,$64			;Redirige vers empty_handler
	move.l	#empty_handler2,$68			;Redirige vers ampty_handler2, inhibe clavier
	bset.b	#2,($600001)				;Remet protection m�moire
	move.w	#0,d0					;Active toutes les interruptions
	trap	#1					;Effectu� par d0
	
 	bsr	GetCalculator				;Renvoie le model de TI dans calc
 	
 	jsr	polysnd2::EnableSound			;Met le port I/O en son
	jsr	polysnd2::InstallSound			;Install l'interurption audio
 
	moveq.b  #_MONO,d0				;Met PolySnd en mode MONO
 	jsr	polysnd2::PlayMode			;Effectu� par PlayMode
 
 	move.w	#122,d0					;Le tempo ne peux pas �tre pr�cis
 	jsr	polysnd2::SetTempo_voice1		;R�gle tempo voie1 et voie2
 
 	lea	channel1(PC),a0				;Adresse de channel1
 	jsr	polysnd2::PlaySound_voice1
 	 	 	
	moveq.b  #_ALLVOICES,d0				;Pour toutes les voies
 	jsr	polysnd2::SetState			;Par d�faut PolySnd et en mode pause pour �viter
 	
loop_key:						;Boucle clavier
 	jsr	polysnd2::VoiceState			;R�cup�re �tat des voies
 	tst.b	d0					;Si 0 alors musique finit
 	beq	fin					;Donc fin
 	
 	cmp.b	#0,calc					;Si TI89
	beq	key_89					;key_89
	bne	key_92					;key_92 focntionne aussi sur V200	

key_89: move.w	#6,d0					;Rep�re ESC
	bsr	masque
	btst.b	#0,d0
	beq	fin					;Si press� fin
	bne	loop_key				;Sinon loop

key_92: move.w	#8,d0					;Rep�r� ESC
	bsr	masque	
	btst.b	#6,d0
	beq	fin					;Si press� fin
	bra	loop_key				;sinon loop
 
fin:	
 	jsr	polysnd2::UninstallSound		;Desinstall l'interurption audio et la remet � son �tat courant
	jsr	polysnd2::DisableSound			;Idem pour l'interruption du port I/O
	
	move.w	#$0700,d0				;D�sactive interruptions
	trap	#1
	bclr.b	#2,($600001)
	move.l	int1(PC),$64				;Remet � son �tat courant l'auto int 1 et 2
	move.l	int2(PC),$68
	bset.b	#2,$600001
	moveq.w	#0,d0
	trap	#1
 	rts	


empty_handler:
	rte
	
empty_handler2:
	sf.b $60001b 					;Permet d'inhiber le clavier
	rte 
	
;----------------------------
;Detection de la calculatrice
;----------------------------
GetCalculator:
	movem.l	a1,-(a7)			;Sauvegarde a1
	move.l $C8,a0				;Addresse pour v�rifier si TI-89 ou TI-92 Plus
	move.b	#1,calc				;Pr�d�finis comme TI-92 Plus
	move.l	a0,d1				;Pr�pare d1
	and.l #$400000,d1			;Si ~0 alors TI-92 Plus sinon TI-89 ou V200
	bne	__calculator			;Dans cas TI-92 Plus alors Fin
	move.b	#0,calc				;Pr�d�finis comme TI-89
	move.l $2F*4(a0),a1			;Pr�pare condition
	cmp.b	#200,2(a1)			;Si 200 alors TI-89
	bcs	__calculator			;Donc Fin
	move.b	#2,calc				;Donc V200
__calculator:
	movem.l	(a7)+,a1			;Restaure a1
	rts
	
	
;--------------------------------------------
;Masque pour la lecture du clavier	
;********************************************
;********************************************
;masque une ligne du clavier
;--------------------------------------------
;d0=ligne -> d0=r�ponse
;********************************************
masque:
	movem.l	d1,-(a7)
	move.w	#$FFFE,d1
	rol.w	d0,d1
	clr.w	d0
	move.w	d1,($600018)
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	move.b	($60001B),d0
	movem.l	(a7)+,d1
	RTS
	
		
_comment dc.b	"StarFox version Nintendo",0
calc	 dc.b	0

int1	dc.l	0
int2	dc.l	0
	EVEN
	
	
;********************************************************************
;Channels obtenues avec PolySnd MIDI Converter.
;********************************************************************
channel1:
	dc.b	_a5,48
	dc.b	_gd5,8
	dc.b	_a5,8
	dc.b	_e6,64
	dc.b	pause,32
	dc.b	_dd6,16
	dc.b	_e6,16
	dc.b	_fd6,16
	dc.b	_b5,16
	dc.b	_cd6,16
	dc.b	_dd6,16
	dc.b	_fd6,48
	dc.b	_e6,8
	dc.b	_dd6,8
	dc.b	_e6,64
	dc.b	pause,32
	dc.b	_e6,32
	dc.b	_fd6,32
	dc.b	_gd6,32
	dc.b	_a6,48
	dc.b	_d6,8
	dc.b	_cd6,8
	dc.b	_d6,32
	dc.b	_a6,32
	dc.b	_a6,48
	dc.b	_d6,8
	dc.b	_cd6,8
	dc.b	_d6,32
	dc.b	_a6,32
	dc.b	_b6,128
	dc.b	_e6,32
	dc.b	pause,32
	dc.b	_e5,64
	dc.b	_a5,48
	dc.b	_gd5,8
	dc.b	_a5,8
	dc.b	_e6,64
	dc.b	pause,32
	dc.b	_dd6,16
	dc.b	_e6,16
	dc.b	_fd6,16
	dc.b	_b5,16
	dc.b	_cd6,16
	dc.b	_dd6,16
	dc.b	_fd6,48
	dc.b	_e6,8
	dc.b	_dd6,8
	dc.b	_e6,64
	dc.b	pause,32
	dc.b	_e6,32
	dc.b	_fd6,32
	dc.b	_gd6,32
	dc.b	_a6,48
	dc.b	_d6,8
	dc.b	_cd6,8
	dc.b	_d6,32
	dc.b	_a6,32
	dc.b	_a6,48
	dc.b	_d6,8
	dc.b	_cd6,8
	dc.b	_d6,32
	dc.b	_a6,32
	dc.b	_b6,128
	dc.b	_e6,32
	dc.b	pause,32
	dc.b	_e5,64
	dc.b	255