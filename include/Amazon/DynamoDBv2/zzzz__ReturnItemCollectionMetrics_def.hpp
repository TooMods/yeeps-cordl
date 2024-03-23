#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReturnItemCollectionMetrics)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ReturnItemCollectionMetrics;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics);
// Type: Amazon.DynamoDBv2::ReturnItemCollectionMetrics
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ReturnItemCollectionMetrics*
class CORDL_TYPE ReturnItemCollectionMetrics : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field NONE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NONE, put = setStaticF_NONE))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* NONE;

  /// @brief Field SIZE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SIZE, put = setStaticF_SIZE))::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* SIZE;

  /// @brief Method FindValue, addr 0x12127b4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x121274c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* getStaticF_NONE();

  static inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* getStaticF_SIZE();

  /// @brief Method op_Implicit, addr 0x1212820, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* op_Implicit___Amazon__DynamoDBv2__ReturnItemCollectionMetrics_(::StringW value);

  static inline void setStaticF_NONE(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

  static inline void setStaticF_SIZE(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReturnItemCollectionMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReturnItemCollectionMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReturnItemCollectionMetrics(ReturnItemCollectionMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReturnItemCollectionMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReturnItemCollectionMetrics(ReturnItemCollectionMetrics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, "Amazon.DynamoDBv2", "ReturnItemCollectionMetrics");
