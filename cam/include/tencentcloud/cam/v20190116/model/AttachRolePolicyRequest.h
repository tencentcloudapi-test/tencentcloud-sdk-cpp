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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHROLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHROLEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * AttachRolePolicy请求参数结构体
                */
                class AttachRolePolicyRequest : public AbstractModel
                {
                public:
                    AttachRolePolicyRequest();
                    ~AttachRolePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param PolicyId 策略ID
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取角色ID，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     * @return AttachRoleId 角色ID，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     */
                    std::string GetAttachRoleId() const;

                    /**
                     * 设置角色ID，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     * @param AttachRoleId 角色ID，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     */
                    void SetAttachRoleId(const std::string& _attachRoleId);

                    /**
                     * 判断参数 AttachRoleId 是否已赋值
                     * @return AttachRoleId 是否已赋值
                     */
                    bool AttachRoleIdHasBeenSet() const;

                    /**
                     * 获取角色名称，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     * @return AttachRoleName 角色名称，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     */
                    std::string GetAttachRoleName() const;

                    /**
                     * 设置角色名称，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     * @param AttachRoleName 角色名称，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     */
                    void SetAttachRoleName(const std::string& _attachRoleName);

                    /**
                     * 判断参数 AttachRoleName 是否已赋值
                     * @return AttachRoleName 是否已赋值
                     */
                    bool AttachRoleNameHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 角色ID，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     */
                    std::string m_attachRoleId;
                    bool m_attachRoleIdHasBeenSet;

                    /**
                     * 角色名称，用于指定角色，入参 AttachRoleId 与 AttachRoleName 二选一
                     */
                    std::string m_attachRoleName;
                    bool m_attachRoleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHROLEPOLICYREQUEST_H_
