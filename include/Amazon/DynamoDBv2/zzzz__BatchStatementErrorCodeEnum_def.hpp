#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BatchStatementErrorCodeEnum)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class BatchStatementErrorCodeEnum;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum);
// Type: Amazon.DynamoDBv2::BatchStatementErrorCodeEnum
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::BatchStatementErrorCodeEnum*
class CORDL_TYPE BatchStatementErrorCodeEnum : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field AccessDenied, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AccessDenied, put = setStaticF_AccessDenied))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* AccessDenied;

  /// @brief Field ConditionalCheckFailed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConditionalCheckFailed, put = setStaticF_ConditionalCheckFailed))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* ConditionalCheckFailed;

  /// @brief Field DuplicateItem, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DuplicateItem, put = setStaticF_DuplicateItem))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* DuplicateItem;

  /// @brief Field InternalServerError, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InternalServerError, put = setStaticF_InternalServerError))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* InternalServerError;

  /// @brief Field ItemCollectionSizeLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ItemCollectionSizeLimitExceeded,
                             put = setStaticF_ItemCollectionSizeLimitExceeded))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* ItemCollectionSizeLimitExceeded;

  /// @brief Field ProvisionedThroughputExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ProvisionedThroughputExceeded,
                             put = setStaticF_ProvisionedThroughputExceeded))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* ProvisionedThroughputExceeded;

  /// @brief Field RequestLimitExceeded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RequestLimitExceeded, put = setStaticF_RequestLimitExceeded))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* RequestLimitExceeded;

  /// @brief Field ResourceNotFound, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResourceNotFound, put = setStaticF_ResourceNotFound))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* ResourceNotFound;

  /// @brief Field ThrottlingError, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ThrottlingError, put = setStaticF_ThrottlingError))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* ThrottlingError;

  /// @brief Field TransactionConflict, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TransactionConflict, put = setStaticF_TransactionConflict))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* TransactionConflict;

  /// @brief Field ValidationError, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValidationError, put = setStaticF_ValidationError))::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* ValidationError;

  /// @brief Method FindValue, addr 0x12100a4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x121003c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_AccessDenied();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_ConditionalCheckFailed();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_DuplicateItem();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_InternalServerError();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_ItemCollectionSizeLimitExceeded();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_ProvisionedThroughputExceeded();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_RequestLimitExceeded();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_ResourceNotFound();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_ThrottlingError();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_TransactionConflict();

  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* getStaticF_ValidationError();

  /// @brief Method op_Implicit, addr 0x1210110, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* op_Implicit___Amazon__DynamoDBv2__BatchStatementErrorCodeEnum_(::StringW value);

  static inline void setStaticF_AccessDenied(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_ConditionalCheckFailed(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_DuplicateItem(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_InternalServerError(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_ItemCollectionSizeLimitExceeded(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_ProvisionedThroughputExceeded(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_RequestLimitExceeded(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_ResourceNotFound(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_ThrottlingError(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_TransactionConflict(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

  static inline void setStaticF_ValidationError(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchStatementErrorCodeEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementErrorCodeEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchStatementErrorCodeEnum(BatchStatementErrorCodeEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchStatementErrorCodeEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchStatementErrorCodeEnum(BatchStatementErrorCodeEnum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "Amazon.DynamoDBv2", "BatchStatementErrorCodeEnum");
