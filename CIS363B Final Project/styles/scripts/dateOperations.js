function showDate()
{
	var today = new Date();
	var strDate = formatShortDate(today);
	
	var fullDate = document.getElementById("fullDate");
	fullDate.textContent = strDate;
}

function formatShortDate(aDate)
{
	return (aDate.getMonth()+1) + "/" + aDate.getDate() + "/" + aDate.getFullYear();
}
