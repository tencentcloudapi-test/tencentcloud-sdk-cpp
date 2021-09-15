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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEUSERANDSEALRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEUSERANDSEALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CreateUserAndSeal返回参数结构体
                */
                class CreateUserAndSealResponse : public AbstractModel
                {
                public:
                    CreateUserAndSealResponse();
                    ~CreateUserAndSealResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户唯一标识，按应用号隔离
                     * @return UserId 用户唯一标识，按应用号隔离
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取默认印章ID
                     * @return SealId 默认印章ID
                     */
                    std::string GetSealId() const;

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     */
                    bool SealIdHasBeenSet() const;

                private:

                    /**
                     * 用户唯一标识，按应用号隔离
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 默认印章ID
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEUSERANDSEALRESPONSE_H_
