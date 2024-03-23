#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/DynamoDBv2/DataModel/AsyncSearch_1.hpp"
#include "Amazon/DynamoDBv2/DataModel/BatchGet.hpp"
#include "Amazon/DynamoDBv2/DataModel/BatchGet_1.hpp"
#include "Amazon/DynamoDBv2/DataModel/BatchWrite.hpp"
#include "Amazon/DynamoDBv2/DataModel/BatchWrite_1.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBContext.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBContextConfig.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBFlatConfig.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBGlobalSecondaryIndexHashKeyAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBGlobalSecondaryIndexRangeKeyAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBHashKeyAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBIgnoreAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBLocalSecondaryIndexRangeKeyAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBOperationConfig.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBPropertyAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBRangeKeyAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBRenamableAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBTableAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/DynamoDBVersionAttribute.hpp"
#include "Amazon/DynamoDBv2/DataModel/GSIConfig.hpp"
#include "Amazon/DynamoDBv2/DataModel/IDynamoDBContext.hpp"
#include "Amazon/DynamoDBv2/DataModel/IPropertyConverter.hpp"
#include "Amazon/DynamoDBv2/DataModel/ItemStorage.hpp"
#include "Amazon/DynamoDBv2/DataModel/ItemStorageConfig.hpp"
#include "Amazon/DynamoDBv2/DataModel/ItemStorageConfigCache.hpp"
#include "Amazon/DynamoDBv2/DataModel/MultiTableBatchGet.hpp"
#include "Amazon/DynamoDBv2/DataModel/MultiTableBatchWrite.hpp"
#include "Amazon/DynamoDBv2/DataModel/PropertyStorage.hpp"
#include "Amazon/DynamoDBv2/DataModel/QueryCondition.hpp"
#include "Amazon/DynamoDBv2/DataModel/S3ClientCache.hpp"
#include "Amazon/DynamoDBv2/DataModel/S3Link.hpp"
#include "Amazon/DynamoDBv2/DataModel/ScanCondition.hpp"
#include "Amazon/DynamoDBv2/DataModel/SimplePropertyStorage.hpp"
#include "Amazon/DynamoDBv2/DataModel/StorageConfig.hpp"
#include "Amazon/DynamoDBv2/DataModel/Utils.hpp"
#ifdef __cpp_modules
export module DataModel;
#endif
