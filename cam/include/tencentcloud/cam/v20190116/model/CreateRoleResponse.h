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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLERESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLERESPONSE_H_

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
                * CreateRole返回参数结构体
                */
                class CreateRoleResponse : public AbstractModel
                {
                public:
                    CreateRoleResponse();
                    ~CreateRoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleId 角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRoleId() const;

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                private:

                    /**
                     * 角色ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATEROLERESPONSE_H_
