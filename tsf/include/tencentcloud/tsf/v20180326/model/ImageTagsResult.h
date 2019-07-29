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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_IMAGETAGSRESULT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_IMAGETAGSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ImageTag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 镜像版本列表
                */
                class ImageTagsResult : public AbstractModel
                {
                public:
                    ImageTagsResult();
                    ~ImageTagsResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总记录数
                     * @param TotalCount 总记录数
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取仓库名,含命名空间,如tsf/ngin
                     * @return RepoName 仓库名,含命名空间,如tsf/ngin
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名,含命名空间,如tsf/ngin
                     * @param RepoName 仓库名,含命名空间,如tsf/ngin
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取镜像服务器地址
                     * @return Server 镜像服务器地址
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像服务器地址
                     * @param Server 镜像服务器地址
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取列表信息
                     * @return Content 列表信息
                     */
                    std::vector<ImageTag> GetContent() const;

                    /**
                     * 设置列表信息
                     * @param Content 列表信息
                     */
                    void SetContent(const std::vector<ImageTag>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 仓库名,含命名空间,如tsf/ngin
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 镜像服务器地址
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 列表信息
                     */
                    std::vector<ImageTag> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_IMAGETAGSRESULT_H_
