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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceNetwork请求参数结构体
                */
                class ModifyDBInstanceNetworkRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceNetworkRequest();
                    ~ModifyDBInstanceNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param InstanceId 实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取新VPC网络Id
                     * @return NewVpcId 新VPC网络Id
                     */
                    std::string GetNewVpcId() const;

                    /**
                     * 设置新VPC网络Id
                     * @param NewVpcId 新VPC网络Id
                     */
                    void SetNewVpcId(const std::string& _newVpcId);

                    /**
                     * 判断参数 NewVpcId 是否已赋值
                     * @return NewVpcId 是否已赋值
                     */
                    bool NewVpcIdHasBeenSet() const;

                    /**
                     * 获取新子网Id
                     * @return NewSubnetId 新子网Id
                     */
                    std::string GetNewSubnetId() const;

                    /**
                     * 设置新子网Id
                     * @param NewSubnetId 新子网Id
                     */
                    void SetNewSubnetId(const std::string& _newSubnetId);

                    /**
                     * 判断参数 NewSubnetId 是否已赋值
                     * @return NewSubnetId 是否已赋值
                     */
                    bool NewSubnetIdHasBeenSet() const;

                    /**
                     * 获取原vip保留时长，单位小时，默认为0，代表立即回收，最大为168小时
                     * @return OldIpRetainTime 原vip保留时长，单位小时，默认为0，代表立即回收，最大为168小时
                     */
                    int64_t GetOldIpRetainTime() const;

                    /**
                     * 设置原vip保留时长，单位小时，默认为0，代表立即回收，最大为168小时
                     * @param OldIpRetainTime 原vip保留时长，单位小时，默认为0，代表立即回收，最大为168小时
                     */
                    void SetOldIpRetainTime(const int64_t& _oldIpRetainTime);

                    /**
                     * 判断参数 OldIpRetainTime 是否已赋值
                     * @return OldIpRetainTime 是否已赋值
                     */
                    bool OldIpRetainTimeHasBeenSet() const;

                    /**
                     * 获取指定VIP地址
                     * @return Vip 指定VIP地址
                     */
                    std::string GetVip() const;

                    /**
                     * 设置指定VIP地址
                     * @param Vip 指定VIP地址
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 新VPC网络Id
                     */
                    std::string m_newVpcId;
                    bool m_newVpcIdHasBeenSet;

                    /**
                     * 新子网Id
                     */
                    std::string m_newSubnetId;
                    bool m_newSubnetIdHasBeenSet;

                    /**
                     * 原vip保留时长，单位小时，默认为0，代表立即回收，最大为168小时
                     */
                    int64_t m_oldIpRetainTime;
                    bool m_oldIpRetainTimeHasBeenSet;

                    /**
                     * 指定VIP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKREQUEST_H_
