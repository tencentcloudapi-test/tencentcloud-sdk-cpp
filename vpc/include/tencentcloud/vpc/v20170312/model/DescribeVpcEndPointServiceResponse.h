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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/EndPointService.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcEndPointService返回参数结构体
                */
                class DescribeVpcEndPointServiceResponse : public AbstractModel
                {
                public:
                    DescribeVpcEndPointServiceResponse();
                    ~DescribeVpcEndPointServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取终端节点服务对象数组。
                     * @return EndPointServiceSet 终端节点服务对象数组。
                     */
                    std::vector<EndPointService> GetEndPointServiceSet() const;

                    /**
                     * 判断参数 EndPointServiceSet 是否已赋值
                     * @return EndPointServiceSet 是否已赋值
                     */
                    bool EndPointServiceSetHasBeenSet() const;

                    /**
                     * 获取符合查询条件的个数。
                     * @return TotalCount 符合查询条件的个数。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务对象数组。
                     */
                    std::vector<EndPointService> m_endPointServiceSet;
                    bool m_endPointServiceSetHasBeenSet;

                    /**
                     * 符合查询条件的个数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICERESPONSE_H_
