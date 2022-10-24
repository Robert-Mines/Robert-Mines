<%@ Page Title="" Language="C#" MasterPageFile="~/presentation/Default.Master" AutoEventWireup="true" CodeBehind="CheckOut.aspx.cs" Inherits="WEB460_Bookstore.presentation.CheckOut" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="PageImage" runat="server">
    <asp:Image ID="Image1" runat="server" ImageUrl="~\presentation\images\checkout.jfif" />
</asp:Content>
<asp:Content ID="Content3" ContentPlaceHolderID="PageInformation" runat="server">
    <h1>Order Information</h1>
    <p>Please complete & submit the form below</p>
</asp:Content>
<asp:Content ID="Content4" ContentPlaceHolderID="MainContent" runat="server">
    <div class="row">
            <div class="col-2">
                <asp:Label ID="Label1" runat="server" Text="First Name"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtFirstName" Columns="50" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="FirstNameValidator" CssClass = "statusError" runat="server" ErrorMessage="First Name Required" ControlToValidate="txtFirstName"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label2" runat="server" Text="Last Name"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtLastName" Columns="50" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="LastNameValidator" CssClass = "statusError" runat="server" ErrorMessage="Last Name Required" ControlToValidate="txtLastName"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label3" runat="server" Text="Address Line 1"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtAddress1" Columns="50" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="AddressValidator" CssClass = "statusError" runat="server" ErrorMessage="Address Required" ControlToValidate="txtAddress1"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label4" runat="server" Text="Address Line 2"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtAddress2" Columns="50" runat="server" ValidationGroup="order"></asp:TextBox>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label5" runat="server" Text="City"></asp:Label>
            </div>
            <div class="col-4">
                <asp:TextBox ID="txtCity" Columns="25" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="CityValidator1" CssClass = "statusError" runat="server" ErrorMessage="City Required" ControlToValidate="txtCity"></asp:RequiredFieldValidator>
            </div>
            <div class="col-2">
                <asp:Label ID="Label6" runat="server" Text="State"></asp:Label>
            </div>
            <div class="col-4">
                <asp:TextBox ID="txtState" Columns="25" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="StateValidator2" CssClass = "statusError" runat="server" ErrorMessage="State Required" ControlToValidate="txtState"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label7" runat="server" Text="Phone Number"></asp:Label>
            </div>
            <div class="col-4">
                <asp:TextBox ID="txtPhone" Columns="25" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="PhoneNumberValidator" CssClass = "statusError" runat="server" ErrorMessage="Phone Required" ControlToValidate="txtPhone"></asp:RequiredFieldValidator>
                <asp:RegularExpressionValidator ID="PhoneValidator" CssClass = "statusError" runat="server" ErrorMessage="Invalid Phone" ControlToValidate="txtPhone" ValidationExpression="^[0-9]{10}$"></asp:RegularExpressionValidator>
            </div>
            <div class="col-2">
                <asp:Label ID="Label8" runat="server" Text="Email Address"></asp:Label>
            </div>
            <div class="col-4">
                <asp:TextBox ID="txtEmail" Columns="25" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="EmailValidator" CssClass = "statusError" runat="server" ErrorMessage="Email Required" ControlToValidate="txtEmail"></asp:RequiredFieldValidator>
                <asp:RegularExpressionValidator ID="EmailAddressValidator" CssClass = "statusError" runat="server" ErrorMessage="Invalid Email" ControlToValidate="txtEmail" ValidationExpression="^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$"></asp:RegularExpressionValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label9" runat="server" Text="Credit Card"></asp:Label>
            </div>
            <div class="col-4">
                <asp:RadioButtonList ID="RadCreditCard" runat="server">
                    <asp:ListItem>Visa</asp:ListItem>
                    <asp:ListItem>Master Card</asp:ListItem>
                    <asp:ListItem>American Express</asp:ListItem>
                    <asp:ListItem>Discover</asp:ListItem>
                </asp:RadioButtonList>
            </div>
            <div class="col-2">
                <asp:Label ID="Label10" runat="server" Text="Credit Card Number"></asp:Label>
            </div>
            <div class="col-4">
                <asp:TextBox ID="txtCardNumber" Columns="25" runat="server" ValidationGroup="order"></asp:TextBox>
                <asp:RequiredFieldValidator ID="CardNumberValidator" CssClass = "statusError" runat="server" ErrorMessage="CC Number Required" ControlToValidate="txtCardNumber"></asp:RequiredFieldValidator>
            </div>
        </div>

        <div class="row">
            <div class="col-md-4" style="text-align: left">
                <asp:Button ID="btnSubmit" runat="server" Text="Submit" onclick="btnSubmit_Click"/>
                <asp:Button ID="btnClear" runat="server" Text="Cancel" PostBackUrl="~/index.aspx" CausesValidation="False"/>
            </div>
        </div>
</asp:Content>
