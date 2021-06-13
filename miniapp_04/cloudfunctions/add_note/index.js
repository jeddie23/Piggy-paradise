// 云函数入口文件
const cloud = require('wx-server-sdk')

cloud.init()

const db = cloud.database()
// 云函数入口函数
exports.main = async (event, context) => {
  try{

    return await db.collection('user_note').add({
      data:{
        user_name:event.user_name,
        content: event.content,
        date: event.date
      }
    })
  }catch(e){
    console.log(e)
  }
}