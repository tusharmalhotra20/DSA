const fs = require("fs");
const { extname, basename } = require("path");

function getCurrentFilenames() {
  fs.readdirSync(__dirname).forEach((file, i) => {


    console.log(file + " " + i);
    // if (extname(file) === ".cpp") {
    //   fs.rename(
    //     __dirname + "/" + file,
    //     __dirname + `/p00${i + 1}.cpp`,
    //     (error) => {
    //       if (error) {
    //         // Show the error
    //         console.log(error);
    //       }
    //     }
    //   );
    // }
  });
}

getCurrentFilenames();
