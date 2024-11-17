
const middlewareProva = (req, res, next)=>{
    const {method, url} = req
    console.log(method, url)
    res.send('middleware')
}

module.exports = middlewareProva