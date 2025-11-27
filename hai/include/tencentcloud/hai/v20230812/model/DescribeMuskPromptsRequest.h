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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMUSKPROMPTSREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMUSKPROMPTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/Filter.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                class Filter;

                /**
                * DescribeMuskPrompts请求参数结构体
                */
                class DescribeMuskPromptsRequest : public AbstractModel
                {
                public:
                    DescribeMuskPromptsRequest();
                    ~DescribeMuskPromptsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取workgroup id
                     * @return WorkgroupId workgroup id
                     * 
                     */
                    std::string GetWorkgroupId() const;

                    /**
                     * 设置workgroup id
                     * @param _workgroupId workgroup id
                     * 
                     */
                    void SetWorkgroupId(const std::string& _workgroupId);

                    /**
                     * 判断参数 WorkgroupId 是否已赋值
                     * @return WorkgroupId 是否已赋值
                     * 
                     */
                    bool WorkgroupIdHasBeenSet() const;

                    /**
                     * 获取workflow id
                     * @return WorkflowId workflow id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置workflow id
                     * @param _workflowId workflow id
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取offset 
                     * @return Offset offset 
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置offset 
                     * @param _offset offset 
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取limit
                     * @return Limit limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置limit
                     * @param _limit limit
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤参数 支持过滤的键值： PromptId，Status
                     * @return Filters 过滤参数 支持过滤的键值： PromptId，Status
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数 支持过滤的键值： PromptId，Status
                     * @param _filters 过滤参数 支持过滤的键值： PromptId，Status
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * workgroup id
                     */
                    std::string m_workgroupId;
                    bool m_workgroupIdHasBeenSet;

                    /**
                     * workflow id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * offset 
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤参数 支持过滤的键值： PromptId，Status
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMUSKPROMPTSREQUEST_H_
