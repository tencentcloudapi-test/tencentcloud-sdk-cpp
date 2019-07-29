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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_AUTHTESTTIDRESPONSE_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_AUTHTESTTIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * AuthTestTid返回参数结构体
                */
                class AuthTestTidResponse : public AbstractModel
                {
                public:
                    AuthTestTidResponse();
                    ~AuthTestTidResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取认证结果
                     * @return Pass 认证结果
                     */
                    bool GetPass() const;

                    /**
                     * 判断参数 Pass 是否已赋值
                     * @return Pass 是否已赋值
                     */
                    bool PassHasBeenSet() const;

                private:

                    /**
                     * 认证结果
                     */
                    bool m_pass;
                    bool m_passHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_AUTHTESTTIDRESPONSE_H_
