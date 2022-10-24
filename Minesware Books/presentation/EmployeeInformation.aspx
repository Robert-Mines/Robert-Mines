<%@ Page Title="" Language="C#" MasterPageFile="~/presentation/Default.Master" AutoEventWireup="true" CodeBehind="EmployeeInformation.aspx.cs" Inherits="WEB460_Bookstore.presentation.EmployeeInformation" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="PageImage" runat="server">
    <asp:Image ID="Image1" runat="server" ImageUrl="~/presentation/images/employee.jfif" />
</asp:Content>
<asp:Content ID="Content3" ContentPlaceHolderID="PageInformation" runat="server">
    <h1>Employee Information</h1>
    <p>Enter employee information below & click submit</p>
</asp:Content>
<asp:Content ID="Content4" ContentPlaceHolderID="MainContent" runat="server">
    <div class="row">
            <div class="col-2">
                <asp:Label ID="Label1" runat="server" Text="First Name"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtFirstName" Columns="50" runat="server" ValidationGroup="employee"></asp:TextBox>
                <asp:RequiredFieldValidator ID="FirstNameValidator" CssClass = "statusError" runat="server" ErrorMessage="First Name Required" ControlToValidate="txtFirstName"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label2" runat="server" Text="Last Name"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtLastName" Columns="50" runat="server" ValidationGroup="employee"></asp:TextBox>
                <asp:RequiredFieldValidator ID="LastNameValidator" CssClass = "statusError" runat="server" ErrorMessage="Last Name Required" ControlToValidate="txtLastName"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label3" runat="server" Text="User Name"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtUserName" Columns="50" runat="server" ValidationGroup="employee"></asp:TextBox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator2" CssClass = "statusError" runat="server" ErrorMessage="User Name Required" ControlToValidate="txtUserName"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label4" runat="server" Text="Password"></asp:Label>
            </div>
            <div class="col-8">
                <asp:TextBox ID="txtPassword" Columns="50" runat="server" ValidationGroup="employee"></asp:TextBox>
                <asp:Label runat="server" ID="lblPasswordError" Text="" Visible="False"></asp:Label>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator3" CssClass = "statusError" runat="server" ErrorMessage="Password Required" ControlToValidate="txtPassword"></asp:RequiredFieldValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label7" runat="server" Text="Phone Number"></asp:Label>
            </div>
            <div class="col-4">
                <asp:TextBox ID="txtPhone" Columns="25" runat="server" ValidationGroup="employee"></asp:TextBox>
                <asp:RequiredFieldValidator ID="PhoneNumberValidator3" CssClass = "statusError" runat="server" ErrorMessage="Phone Required" ControlToValidate="txtPhone"></asp:RequiredFieldValidator>
                <asp:RegularExpressionValidator ID="RegularExpressionValidator1" CssClass = "statusError" runat="server" ErrorMessage="Invalid Phone" ControlToValidate="txtPhone" ValidationExpression="^[0-9]{10}$"></asp:RegularExpressionValidator>
            </div>
            <div class="col-2">
                <asp:Label ID="Label8" runat="server" Text="Email Address"></asp:Label>
            </div>
            <div class="col-4">
                <asp:TextBox ID="txtEmail" Columns="25" runat="server" ValidationGroup="employee"></asp:TextBox>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" CssClass = "statusError" runat="server" ErrorMessage="Email Required" ControlToValidate="txtEmail"></asp:RequiredFieldValidator>
                <asp:RegularExpressionValidator ID="EmailAddressValidator" CssClass = "statusError" runat="server" ErrorMessage="Invalid Email" ControlToValidate="txtEmail" ValidationExpression="^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$"></asp:RegularExpressionValidator>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label10" runat="server" Text="Hire Date"></asp:Label>
            </div>
            <div class="col-8">
                <asp:Calendar ID="calHireDate" runat="server" BackColor="White" BorderColor="White" BorderWidth="1px" Font-Names="Verdana" Font-Size="9pt" ForeColor="Black" Height="190px" NextPrevFormat="FullMonth" Width="350px">
                    <DayHeaderStyle Font-Bold="True" Font-Size="8pt" />
                    <NextPrevStyle Font-Bold="True" Font-Size="8pt" ForeColor="#333333" VerticalAlign="Bottom" />
                    <OtherMonthDayStyle ForeColor="#999999" />
                    <SelectedDayStyle BackColor="#333399" ForeColor="White" />
                    <TitleStyle BackColor="White" BorderColor="Black" BorderWidth="4px" Font-Bold="True" Font-Size="12pt" ForeColor="#333399" />
                    <TodayDayStyle BackColor="#CCCCCC" />
                </asp:Calendar>
            </div>
        </div>
        <div class="row">
            <div class="col-2">
                <asp:Label ID="Label9" runat="server" Text="Security Level"></asp:Label>
            </div>
            <div class="col-8">
                <asp:RadioButtonList ID="RadSecurityLevel" runat="server">
                    <asp:ListItem Value="A">Administrator</asp:ListItem>
                    <asp:ListItem Value="B">Business User</asp:ListItem>
                </asp:RadioButtonList>
            </div>
        </div>

        <div class="row">
            <div class="col-md-4" style="text-align: left">
                <asp:Button ID="btnSubmit" runat="server" Text="Submit" onclick="btnSubmit_Click"/>
                <asp:Button ID="btnClear" runat="server" Text="Cancel" PostBackUrl="~/index.aspx" CausesValidation="False" />
            </div>
        </div>
        <div class="row">
            <div class="col-8" style="text-align: left">
                <asp:Label ID="lblStatus" runat="server" Text="" CssClass="status"></asp:Label>
            </div>
        </div>
</asp:Content>
