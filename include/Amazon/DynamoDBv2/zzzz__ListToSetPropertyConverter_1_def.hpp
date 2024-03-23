#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/DynamoDBv2/zzzz__SetPropertyConverter_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(ListToSetPropertyConverter_1)
// Forward declare root types
namespace Amazon::DynamoDBv2 {
template <typename TElement> class ListToSetPropertyConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::DynamoDBv2::ListToSetPropertyConverter_1);
// Type: Amazon.DynamoDBv2::ListToSetPropertyConverter`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2 {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2::ListToSetPropertyConverter`1<TElement>*
class CORDL_TYPE ListToSetPropertyConverter_1 : public ::Amazon::DynamoDBv2::SetPropertyConverter_2<::System::Collections::Generic::List_1<TElement>*, TElement> {
public:
  // Declarations
  static inline ::Amazon::DynamoDBv2::ListToSetPropertyConverter_1<TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListToSetPropertyConverter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListToSetPropertyConverter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListToSetPropertyConverter_1(ListToSetPropertyConverter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListToSetPropertyConverter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListToSetPropertyConverter_1(ListToSetPropertyConverter_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::DynamoDBv2::ListToSetPropertyConverter_1, "Amazon.DynamoDBv2", "ListToSetPropertyConverter`1");
