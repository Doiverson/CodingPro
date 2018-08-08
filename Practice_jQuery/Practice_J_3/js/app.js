
const $odd = $('a:odd');
const $secureLinks = $('a[href^="https://"]'); /*$は末尾、^は先頭*/
const $pdfs = $('a[href$=".pdf"]');
$pdfs.hide();