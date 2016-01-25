Usage

var options = {};
options.filePath("YOUR_FILEPATH");
option.uptoken=YOUR_UPTOKEN
window.plugins.QiniuUpload.uploads(options,function(re){
	console.log(re);
},function(re){
	console.log(re);						
});