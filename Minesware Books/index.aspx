<%@ Page Title="" Language="C#" MasterPageFile="~/presentation/Default.Master" AutoEventWireup="true" CodeBehind="index.aspx.cs" Inherits="WEB460_Bookstore.index" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="PageImage" runat="server">
    <asp:Image ID="Image1" runat="server" ImageUrl="~/presentation/images/bookstore4.jfif" CssClass="img-fluid" />
</asp:Content>
<asp:Content ID="Content3" ContentPlaceHolderID="PageInformation" runat="server">
    <h1>Welcome To The MinesWare Bookstore</h1>
    <p>
        We are a leading provider of online access to hundreds of educational texts and e-books in a variety of 
        Information Technology disciplines, as well as software development & consulting services.
    </p>
</asp:Content>
<asp:Content ID="Content4" ContentPlaceHolderID="MainContent" runat="server">
    <section>
    <h2><strong>Our Services</strong></h2>
    <p> The MinesWare Bookstore provides users with access to the following:</p>
    <ul>
        <li>Online access to hundreds of articles, journals, educational books, & more, to help fuel your knowledge of IT.</li>
        <li>Web & mobile application development</li>
        <li>Debugging & Unit testing</li>
        <li>Consulting services</li>
    </ul>
    <h2>Thank you for your interest in MinesWare services.</h2>
    </section>
</asp:Content>
