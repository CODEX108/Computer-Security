const express = require("express")
const app = express();

const https = require("https")
const bodyParser = require("body-parser")
//getting our app to use body parser
app.use(bodyParser.urlencoded({extended:true}))

//using node module
//it is compulsary to have https:// before the url
app.get("/", function (req, res) {
    res.sendFile(__dirname+"/index.html")
})


app.listen("3000", function (req, res) {
    console.log("The server has started on port 3000");
})

app.post("/",function(req,res){
   
    const query =  req.body.cityName;
    const appid = "f0d537ee92adbd76101a7ade1b05fce0"
    const units = "metric"
    const url = "https://api.openweathermap.org/data/2.5/weather?q=" + query + "&appid=" + appid + "&units="

    //using the get method and getting the hold of the data from the response
    https.get(url, function (response) {
        response.on("data", function (data) {
            //parse it into json format
            const wheatherData = JSON.parse(data)
            const temp = wheatherData.main.feels_like;
            const desc = wheatherData.weather[0].description;
            const icon = wheatherData.weather[0].icon;
            const imageUrl = "http://openweathermap.org/img/wn/" + icon + "@2x.png";


            res.write("<h1 >The wheather condition in "+query  + " is "+ desc  +"</h1>")
            res.write("<h1>The temperature  is " + temp + " degree celcius </h1>")
            res.write("<img src=" + imageUrl + ">")
            res.send()


        })
    })

})
