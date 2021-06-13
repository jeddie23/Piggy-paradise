// 云函数入口文件
const cloud = require('wx-server-sdk')

cloud.init()

const db = cloud.database()
// 云函数入口函数
exports.main = async (event, context) => {
  try{

    return await db.collection('user_schedule').add({
      data:{
        user_name: event.user_name,
        type:event.type,
        time_begin: event.time_begin,
        time_end: event.time_end,
        time_date: event.time_date,
        detail: event.detail
      }
    })
  }catch(e){
    console.log(e)
  }
}