function validateForm() {
  let fname = document.forms["myForm"]["fname"].value;
  if (fname == "") {
    alert("First name cannot be blank");
    return false;
  }
  let lname = document.forms["myForm"]["lname"].value;
  if (lname == "") {
    alert("Last name cannot be blank");
    return false;
  }
}