document.querySelector(".mode-buttons").addEventListener("click", function (event) {
    if (event.target && event.target.matches("#dark-mode")) {
        document.body.style.backgroundColor = "#2d2d30"
        document.body.style.color = "white"
        document.querySelector("#light-mode").style.visibility = "visible"
        document.querySelector("#dark-mode").style.visibility = "hidden"
    }
    else if (event.target && event.target.matches("#light-mode")) {
        document.body.style.backgroundColor = "white"
        document.body.style.color = "black"
        document.querySelector("#dark-mode").style.visibility = "visible"
        document.querySelector("#light-mode").style.visibility = "hidden"

    }
});

document.querySelector("form.contact-form").addEventListener("submit", function (event) {
    alert("Message Sent!")
    event.preventDefault();
});
