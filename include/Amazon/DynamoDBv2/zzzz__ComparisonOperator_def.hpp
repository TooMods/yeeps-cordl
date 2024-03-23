#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ConstantClass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ComparisonOperator)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
class ComparisonOperator;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::ComparisonOperator);
// Type: Amazon.DynamoDBv2::ComparisonOperator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ComparisonOperator*
class CORDL_TYPE ComparisonOperator : public ::Amazon::Runtime::ConstantClass {
public:
  // Declarations
  /// @brief Field BEGINS_WITH, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BEGINS_WITH, put = setStaticF_BEGINS_WITH))::Amazon::DynamoDBv2::ComparisonOperator* BEGINS_WITH;

  /// @brief Field BETWEEN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BETWEEN, put = setStaticF_BETWEEN))::Amazon::DynamoDBv2::ComparisonOperator* BETWEEN;

  /// @brief Field CONTAINS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CONTAINS, put = setStaticF_CONTAINS))::Amazon::DynamoDBv2::ComparisonOperator* CONTAINS;

  /// @brief Field EQ, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EQ, put = setStaticF_EQ))::Amazon::DynamoDBv2::ComparisonOperator* EQ;

  /// @brief Field GE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GE, put = setStaticF_GE))::Amazon::DynamoDBv2::ComparisonOperator* GE;

  /// @brief Field GT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GT, put = setStaticF_GT))::Amazon::DynamoDBv2::ComparisonOperator* GT;

  /// @brief Field IN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IN, put = setStaticF_IN))::Amazon::DynamoDBv2::ComparisonOperator* IN;

  /// @brief Field LE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LE, put = setStaticF_LE))::Amazon::DynamoDBv2::ComparisonOperator* LE;

  /// @brief Field LT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LT, put = setStaticF_LT))::Amazon::DynamoDBv2::ComparisonOperator* LT;

  /// @brief Field NE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NE, put = setStaticF_NE))::Amazon::DynamoDBv2::ComparisonOperator* NE;

  /// @brief Field NOT_CONTAINS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NOT_CONTAINS, put = setStaticF_NOT_CONTAINS))::Amazon::DynamoDBv2::ComparisonOperator* NOT_CONTAINS;

  /// @brief Field NOT_NULL, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NOT_NULL, put = setStaticF_NOT_NULL))::Amazon::DynamoDBv2::ComparisonOperator* NOT_NULL;

  /// @brief Field NULL, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cordl_NULL, put = setStaticF__cordl_NULL))::Amazon::DynamoDBv2::ComparisonOperator* _cordl_NULL;

  /// @brief Method FindValue, addr 0x1210628, size 0x6c, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ComparisonOperator* FindValue(::StringW value);

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x12105c0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_BEGINS_WITH();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_BETWEEN();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_CONTAINS();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_EQ();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_GE();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_GT();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_IN();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_LE();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_LT();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_NE();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_NOT_CONTAINS();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF_NOT_NULL();

  static inline ::Amazon::DynamoDBv2::ComparisonOperator* getStaticF__cordl_NULL();

  /// @brief Method op_Implicit, addr 0x1210694, size 0x54, virtual false, abstract: false, final false
  static inline ::Amazon::DynamoDBv2::ComparisonOperator* op_Implicit___Amazon__DynamoDBv2__ComparisonOperator_(::StringW value);

  static inline void setStaticF_BEGINS_WITH(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_BETWEEN(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_CONTAINS(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_EQ(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_GE(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_GT(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_IN(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_LE(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_LT(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_NE(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_NOT_CONTAINS(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF_NOT_NULL(::Amazon::DynamoDBv2::ComparisonOperator* value);

  static inline void setStaticF__cordl_NULL(::Amazon::DynamoDBv2::ComparisonOperator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComparisonOperator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComparisonOperator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComparisonOperator(ComparisonOperator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComparisonOperator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComparisonOperator(ComparisonOperator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::ComparisonOperator, 0x18>, "Size mismatch!");

} // namespace Amazon::DynamoDBv2
NEED_NO_BOX(::Amazon::DynamoDBv2::ComparisonOperator);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::ComparisonOperator*, "Amazon.DynamoDBv2", "ComparisonOperator");
