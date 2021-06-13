// 云函数入口文件
const cloud = require('wx-server-sdk')

cloud.init()

const db = cloud.database()
// 云函数入口函数
exports.main = async (event, context) => {
  try{

    return await db.collection('user_schedule').where({
      _id:event._id
    }).update({
      data:{
        detail:event.detail,
        time_begin:event.time_begin,
        time_date:event.time_date,
        time_end:event.time_end,
        type:event.type
      }
    })
  }catch(e){
    console.log(e)
  }
}