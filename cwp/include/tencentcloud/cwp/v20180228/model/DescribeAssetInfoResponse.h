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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetInfo返回参数结构体
                */
                class DescribeAssetInfoResponse : public AbstractModel
                {
                public:
                    DescribeAssetInfoResponse();
                    ~DescribeAssetInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取主机数
                     * @return MachineCount 主机数
                     */
                    uint64_t GetMachineCount() const;

                    /**
                     * 判断参数 MachineCount 是否已赋值
                     * @return MachineCount 是否已赋值
                     */
                    bool MachineCountHasBeenSet() const;

                    /**
                     * 获取账号数
                     * @return AccountCount 账号数
                     */
                    uint64_t GetAccountCount() const;

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取端口数
                     * @return PortCount 端口数
                     */
                    uint64_t GetPortCount() const;

                    /**
                     * 判断参数 PortCount 是否已赋值
                     * @return PortCount 是否已赋值
                     */
                    bool PortCountHasBeenSet() const;

                    /**
                     * 获取进程数
                     * @return ProcessCount 进程数
                     */
                    uint64_t GetProcessCount() const;

                    /**
                     * 判断参数 ProcessCount 是否已赋值
                     * @return ProcessCount 是否已赋值
                     */
                    bool ProcessCountHasBeenSet() const;

                    /**
                     * 获取软件数
                     * @return SoftwareCount 软件数
                     */
                    uint64_t GetSoftwareCount() const;

                    /**
                     * 判断参数 SoftwareCount 是否已赋值
                     * @return SoftwareCount 是否已赋值
                     */
                    bool SoftwareCountHasBeenSet() const;

                    /**
                     * 获取数据库数
                     * @return DatabaseCount 数据库数
                     */
                    uint64_t GetDatabaseCount() const;

                    /**
                     * 判断参数 DatabaseCount 是否已赋值
                     * @return DatabaseCount 是否已赋值
                     */
                    bool DatabaseCountHasBeenSet() const;

                    /**
                     * 获取Web应用数
                     * @return WebAppCount Web应用数
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 判断参数 WebAppCount 是否已赋值
                     * @return WebAppCount 是否已赋值
                     */
                    bool WebAppCountHasBeenSet() const;

                    /**
                     * 获取Web框架数
                     * @return WebFrameCount Web框架数
                     */
                    uint64_t GetWebFrameCount() const;

                    /**
                     * 判断参数 WebFrameCount 是否已赋值
                     * @return WebFrameCount 是否已赋值
                     */
                    bool WebFrameCountHasBeenSet() const;

                    /**
                     * 获取Web服务数
                     * @return WebServiceCount Web服务数
                     */
                    uint64_t GetWebServiceCount() const;

                    /**
                     * 判断参数 WebServiceCount 是否已赋值
                     * @return WebServiceCount 是否已赋值
                     */
                    bool WebServiceCountHasBeenSet() const;

                    /**
                     * 获取Web站点数
                     * @return WebLocationCount Web站点数
                     */
                    uint64_t GetWebLocationCount() const;

                    /**
                     * 判断参数 WebLocationCount 是否已赋值
                     * @return WebLocationCount 是否已赋值
                     */
                    bool WebLocationCountHasBeenSet() const;

                private:

                    /**
                     * 主机数
                     */
                    uint64_t m_machineCount;
                    bool m_machineCountHasBeenSet;

                    /**
                     * 账号数
                     */
                    uint64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * 端口数
                     */
                    uint64_t m_portCount;
                    bool m_portCountHasBeenSet;

                    /**
                     * 进程数
                     */
                    uint64_t m_processCount;
                    bool m_processCountHasBeenSet;

                    /**
                     * 软件数
                     */
                    uint64_t m_softwareCount;
                    bool m_softwareCountHasBeenSet;

                    /**
                     * 数据库数
                     */
                    uint64_t m_databaseCount;
                    bool m_databaseCountHasBeenSet;

                    /**
                     * Web应用数
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                    /**
                     * Web框架数
                     */
                    uint64_t m_webFrameCount;
                    bool m_webFrameCountHasBeenSet;

                    /**
                     * Web服务数
                     */
                    uint64_t m_webServiceCount;
                    bool m_webServiceCountHasBeenSet;

                    /**
                     * Web站点数
                     */
                    uint64_t m_webLocationCount;
                    bool m_webLocationCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETINFORESPONSE_H_
