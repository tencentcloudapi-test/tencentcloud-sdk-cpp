/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATETCICEBERGTABLERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATETCICEBERGTABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {

                /**
                * CreateTcIcebergTable返回参数结构体
                */
                class CreateTcIcebergTableResponse : public AbstractModel
                {
                public:
                    CreateTcIcebergTableResponse();
                    ~CreateTcIcebergTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取amoro的SessionId
                     * @return SessionId amoro的SessionId
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取执行的sql
                     * @return SQL 执行的sql
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     * 
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取为true时只返回sql而不实际执行
                     * @return DryRun 为true时只返回sql而不实际执行
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * amoro的SessionId
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 执行的sql
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * 为true时只返回sql而不实际执行
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATETCICEBERGTABLERESPONSE_H_
