const http = require("http");

const options = {
    host: "www.google.com",
    port: 80,
    path: "/"
};

// Get 방식
const req = http.get(options, (res) => {
    // 응답 처리
    let resData = '';
    res.on('data', (chunk) => {
        resData += chunk;
    })

    res.on('end', () => {
        console.log(resData);
    })
});

req.on('error', (err) => {
    console.log("오류 발생 : " + err.message)
})

