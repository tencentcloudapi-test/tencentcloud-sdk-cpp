/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_ALLDEVICEINFO_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_ALLDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 查询全部设备出参
                */
                class AllDeviceInfo : public AbstractModel
                {
                public:
                    AllDeviceInfo();
                    ~AllDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceId 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceId 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备类型；2：IPC
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceType 设备类型；2：IPC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置设备类型；2：IPC
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceType 设备类型；2：IPC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取设备状态；0：设备不在线；1：设备在线；2：设备隔离中；3：设备未注册
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 设备状态；0：设备不在线；1：设备在线；2：设备隔离中；3：设备未注册
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置设备状态；0：设备不在线；1：设备在线；2：设备隔离中；3：设备未注册
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 设备状态；0：设备不在线；1：设备在线；2：设备隔离中；3：设备未注册
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInformation 设备扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExtraInformation() const;

                    /**
                     * 设置设备扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtraInformation 设备扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtraInformation(const std::string& _extraInformation);

                    /**
                     * 判断参数 ExtraInformation 是否已赋值
                     * @return ExtraInformation 是否已赋值
                     */
                    bool ExtraInformationHasBeenSet() const;

                    /**
                     * 获取设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NickName 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NickName 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取设备绑定分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupPath 设备绑定分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupPath() const;

                    /**
                     * 设置设备绑定分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupPath 设备绑定分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupPath(const std::string& _groupPath);

                    /**
                     * 判断参数 GroupPath 是否已赋值
                     * @return GroupPath 是否已赋值
                     */
                    bool GroupPathHasBeenSet() const;

                    /**
                     * 获取设备编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceCode 设备编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeviceCode() const;

                    /**
                     * 设置设备编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeviceCode 设备编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeviceCode(const std::string& _deviceCode);

                    /**
                     * 判断参数 DeviceCode 是否已赋值
                     * @return DeviceCode 是否已赋值
                     */
                    bool DeviceCodeHasBeenSet() const;

                    /**
                     * 获取是否存在录像,，0:不存在；1：存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRecord 是否存在录像,，0:不存在；1：存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsRecord() const;

                    /**
                     * 设置是否存在录像,，0:不存在；1：存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsRecord 是否存在录像,，0:不存在；1：存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsRecord(const int64_t& _isRecord);

                    /**
                     * 判断参数 IsRecord 是否已赋值
                     * @return IsRecord 是否已赋值
                     */
                    bool IsRecordHasBeenSet() const;

                    /**
                     * 获取该设备是否可录制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Recordable 该设备是否可录制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRecordable() const;

                    /**
                     * 设置该设备是否可录制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Recordable 该设备是否可录制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRecordable(const int64_t& _recordable);

                    /**
                     * 判断参数 Recordable 是否已赋值
                     * @return Recordable 是否已赋值
                     */
                    bool RecordableHasBeenSet() const;

                    /**
                     * 获取设备接入协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 设备接入协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置设备接入协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol 设备接入协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备类型；2：IPC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 设备状态；0：设备不在线；1：设备在线；2：设备隔离中；3：设备未注册
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInformation;
                    bool m_extraInformationHasBeenSet;

                    /**
                     * 设备名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 设备绑定分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupPath;
                    bool m_groupPathHasBeenSet;

                    /**
                     * 设备编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceCode;
                    bool m_deviceCodeHasBeenSet;

                    /**
                     * 是否存在录像,，0:不存在；1：存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isRecord;
                    bool m_isRecordHasBeenSet;

                    /**
                     * 该设备是否可录制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordable;
                    bool m_recordableHasBeenSet;

                    /**
                     * 设备接入协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_ALLDEVICEINFO_H_
