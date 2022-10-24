<%@ Page Title="" Language="C#" MasterPageFile="~/presentation/Default.Master" AutoEventWireup="true" CodeBehind="EmployeeConfirm.aspx.cs" Inherits="WEB460_Bookstore.presentation.EmployeeConfirm" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="PageImage" runat="server">
    <asp:Image ID="Image1" runat="server" ImageUrl="~/presentation/images/employee.jfif" />
</asp:Content>
<asp:Content ID="Content3" ContentPlaceHolderID="PageInformation" runat="server">
    <h1>Employee Confirmation</h1>
    <p>Welcome to the MinesWare team!</p>
</asp:Content>
<asp:Content ID="Content4" ContentPlaceHolderID="MainContent" runat="server">
    <div class="row">
            <div class="col-2">
                <asp:Label ID="Label1" runat="server" Text="Customer Name"></asp:Label>
            </div>
            <div class="col-8">
                <asp:Label ID="lblName" runat="server"></asp:Label>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label2" runat="server" Text="Email"></asp:Label>
            </div>
            <div class="col-8">
                <asp:Label ID="lblEmail" runat="server"></asp:Label>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label3" runat="server" Text="Phone"></asp:Label>
            </div>
            <div class="col-8">
                <asp:Label ID="lblPhone" runat="server"></asp:Label>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label4" runat="server" Text="Hire Date"></asp:Label>
            </div>
            <div class="col-8">
                <asp:Label ID="lblHireDate" runat="server"></asp:Label>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label5" runat="server" Text="Security Level"></asp:Label>
            </div>
            <div class="col-8">
                <asp:Label ID="lblSecurityLevel" runat="server"></asp:Label>
            </div>
        </div>
        <div class="row">
            <div class="col-4">
                <asp:Label ID="lblStatus" runat="server" Text="Status" Font-Bold="true" ForeColor="Red"></asp:Label>
            </div>
        </div>
        <div class="col-md-4" style="text-align:left">
            <asp:Button ID="btnSubmit" runat="server" Text="Home" PostBackUrl="~/index.aspx"/>
        </div>
</asp:Content>
