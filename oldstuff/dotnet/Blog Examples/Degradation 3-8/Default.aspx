﻿<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="Degradation_3_8._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title></title>
    <script src="jquery-1.3.2.min.js" type="text/javascript"></script>
</head>
<body>
    <form id="form1" runat="server">
    <div>
      <asp:Button runat="server" ID="Button1" OnClick="Button1_Click" CssClass="__button1"
        Text="Click Me" />
      <asp:Label runat="server" ID="Label1" CssClass="__label1" />
      <script type="text/javascript">
//        $(document).ready(function() {
//          $(".__button1").click(function() {
//            $(".__label1").text("You Clicked It! (javascript)");
//            return false;
//          });
//        });
      </script>
    </div>
    </form>
</body>
</html>
