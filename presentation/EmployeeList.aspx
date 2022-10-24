<%@ Page Title="" Language="C#" MasterPageFile="~/presentation/Default.Master" AutoEventWireup="true" CodeBehind="EmployeeList.aspx.cs" Inherits="WEB460_Bookstore.presentation.EmployeeList" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="PageImage" runat="server">
    <asp:Image ID="Image1" runat="server" ImageUrl="~/presentation/images/manage.jfif" />
</asp:Content>
<asp:Content ID="Content3" ContentPlaceHolderID="PageInformation" runat="server">
    <h1>Manage Employees</h1>
    <p>Select an employee to Edit or Delete below</p>
</asp:Content>
<asp:Content ID="Content4" ContentPlaceHolderID="MainContent" runat="server">
    <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:BookstoreConnectionString %>" DeleteCommand="DELETE FROM [Employee] WHERE [Id] = @Id" InsertCommand="INSERT INTO [Employee] ([firstName], [lastName], [email], [phone], [securityLevel], [hireDate], [userName], [password]) VALUES (@firstName, @lastName, @email, @phone, @securityLevel, @hireDate, @userName, @password)" SelectCommand="SELECT * FROM [Employee]" UpdateCommand="UPDATE [Employee] SET [firstName] = @firstName, [lastName] = @lastName, [email] = @email, [phone] = @phone, [securityLevel] = @securityLevel, [hireDate] = @hireDate, [userName] = @userName, [password] = @password WHERE [Id] = @Id">
        <DeleteParameters>
            <asp:Parameter Name="Id" Type="Int32" />
        </DeleteParameters>
        <InsertParameters>
            <asp:Parameter Name="firstName" Type="String" />
            <asp:Parameter Name="lastName" Type="String" />
            <asp:Parameter Name="email" Type="String" />
            <asp:Parameter Name="phone" Type="String" />
            <asp:Parameter Name="securityLevel" Type="String" />
            <asp:Parameter Name="hireDate" Type="DateTime" />
            <asp:Parameter Name="userName" Type="String" />
            <asp:Parameter Name="password" Type="String" />
        </InsertParameters>
        <UpdateParameters>
            <asp:Parameter Name="firstName" Type="String" />
            <asp:Parameter Name="lastName" Type="String" />
            <asp:Parameter Name="email" Type="String" />
            <asp:Parameter Name="phone" Type="String" />
            <asp:Parameter Name="securityLevel" Type="String" />
            <asp:Parameter Name="hireDate" Type="DateTime" />
            <asp:Parameter Name="userName" Type="String" />
            <asp:Parameter Name="password" Type="String" />
            <asp:Parameter Name="Id" Type="Int32" />
        </UpdateParameters>
    </asp:SqlDataSource>
    <asp:GridView ID="GridView1" runat="server" AllowPaging="True" AllowSorting="True" BackColor="White" BorderColor="#CC9966" BorderStyle="None" BorderWidth="1px" CellPadding="4" DataSourceID="SqlDataSource1" DataKeyNames="Id" AutoGenerateColumns="False" OnRowUpdating="GridView1_RowUpdating">
        <Columns>
            <asp:CommandField ControlStyle-CssClass="commandButton" ShowDeleteButton="True" ShowEditButton="True" ShowSelectButton="False" >
<ControlStyle CssClass="commandButton"></ControlStyle>
            </asp:CommandField>
            <asp:BoundField DataField="Id" HeaderText="Id" InsertVisible="False" ReadOnly="True" SortExpression="Id" />
            <asp:TemplateField HeaderText="First Name" SortExpression="firstName">
                <EditItemTemplate >
                    <asp:TextBox CssClass="textboxMedium" ID="txtFirstName" runat="server" Text='<%# Bind("firstName") %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="FirstNameValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="First Name Required" ControlToValidate="txtFirstName" 
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label1" runat="server" Text='<%# Bind("firstName") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="Last Name" SortExpression="lastName">
                <EditItemTemplate>
                    <asp:TextBox CssClass="textboxMedium" ID="txtLastName" runat="server" Text='<%# Bind("lastName") %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="LastNameValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Last Name Required" ControlToValidate="txtLastName" 
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label2" runat="server" Text='<%# Bind("lastName") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="Email" SortExpression="email">
                <EditItemTemplate>
                    <asp:TextBox CssClass="textboxMedium" ID="txtEmail" runat="server" Text='<%# Bind("email") %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="EmailValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Email Required" ControlToValidate="txtEmail"
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                    <asp:RegularExpressionValidator ID="EmailAddressValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Invalid Email Address" ControlToValidate="txtEmail" 
                        ValidationExpression="^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$"
                        SetFocusOnError="true" Display="Dynamic"></asp:RegularExpressionValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label3" runat="server" Text='<%# Bind("email") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="Phone" SortExpression="phone">
                <EditItemTemplate>
                    <asp:TextBox CssClass="textboxMedium" ID="txtPhone" runat="server" Text='<%# Bind("phone") %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="PhoneValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Phone Number Required" ControlToValidate="txtPhone"
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                    <asp:RegularExpressionValidator ID="PhoneNumberValidator1" CssClass = "statusError" runat="server" 
                        ErrorMessage="Invalid Phone Number" ControlToValidate="txtPhone" 
                        ValidationExpression="^[0-9]{10}$" SetFocusOnError="true" Display="Dynamic"></asp:RegularExpressionValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label4" runat="server" Text='<%# Bind("phone") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="Security Level" SortExpression="securityLevel">
                <EditItemTemplate>
                    <asp:TextBox CssClass="textboxSmall" ID="txtSecLevel" runat="server" Text='<%# Bind("securityLevel") %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="SecLevelValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Security Level Required" ControlToValidate="txtSecLevel"
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label5" runat="server" Text='<%# Bind("securityLevel") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="Hire Date" SortExpression="hireDate">
                <EditItemTemplate>
                    <asp:TextBox CssClass="textboxMedium" ID="txtHireDate" runat="server" Text='<%# Bind("hireDate", "{0:MM/dd/yyyy}") %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="HireDateValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Hire Date Required" ControlToValidate="txtHireDate"
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                    <asp:RegularExpressionValidator ID="DateFormatValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Date must be in mm/dd/yyyy format!" 
                        ControlToValidate="txtHireDate" ValidationExpression="^\d{1,2}\/\d{1,2}\/\d{4}$"
                        SetFocusOnError="true" Display="Dynamic"></asp:RegularExpressionValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label6" runat="server" Text='<%# Bind("hireDate", "{0:MM/dd/yyyy}") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="User Name" SortExpression="userName">
                <EditItemTemplate>
                    <asp:TextBox CssClass="textboxMedium" ID="txtUserName" runat="server" Text='<%# Bind("userName" ) %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="UserNameValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Username Required" ControlToValidate="txtUserName"
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label7" runat="server" Text='<%# Bind("userName") %>'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="Password" SortExpression="password">
                <EditItemTemplate>
                    <asp:TextBox CssClass="textboxMedium" ID="txtPassword" runat="server" Text='<%# Bind("password") %>'></asp:TextBox>
                    <asp:RequiredFieldValidator ID="PasswordValidator" CssClass = "statusError" runat="server" 
                        ErrorMessage="Password Required" ControlToValidate="txtPassword"
                        SetFocusOnError="true" Display="Dynamic"></asp:RequiredFieldValidator>
                </EditItemTemplate>
                <ItemTemplate>
                    <asp:Label ID="Label8" runat="server" Text='***************'></asp:Label>
                </ItemTemplate>
            </asp:TemplateField>
        </Columns>
        <FooterStyle BackColor="#FFFFCC" ForeColor="#330099" />
        <HeaderStyle BackColor="#990000" Font-Bold="True" ForeColor="#FFFFCC" />
        <PagerStyle BackColor="#FFFFCC" ForeColor="#330099" HorizontalAlign="Center" />
        <RowStyle BackColor="White" ForeColor="#330099" />
        <SelectedRowStyle BackColor="#FFCC66" Font-Bold="True" ForeColor="#663399" />
        <SortedAscendingCellStyle BackColor="#FEFCEB" />
        <SortedAscendingHeaderStyle BackColor="#AF0101" />
        <SortedDescendingCellStyle BackColor="#F6F0C0" />
        <SortedDescendingHeaderStyle BackColor="#7E0000" />
    </asp:GridView>
    <asp:Label ID="lblstatus" CssClass="status" runat="server" Text=""></asp:Label>
</asp:Content>
