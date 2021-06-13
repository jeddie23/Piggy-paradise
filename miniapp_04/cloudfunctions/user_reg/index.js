// 云函数入口文件
const cloud = require('wx-server-sdk')

cloud.init()

const db = cloud.database()
// 云函数入口函数
exports.main = async (event, context) => {
  try{
    console.log('adding data to user_info!')
    return await db.collection('user_info').add({
      data:{
        user_name:event.user_name,
        user_passwd: event.user_passwd

      }
    })
  }catch(e){
    console.log(e)
  }
}