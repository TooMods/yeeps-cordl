#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(AlwaysSendList_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
template <typename T> class AlwaysSendList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::Internal::Util::AlwaysSendList_1);
// Type: Amazon.Runtime.Internal.Util::AlwaysSendList`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::AlwaysSendList`1<T>*
class CORDL_TYPE AlwaysSendList_1 : public ::System::Collections::Generic::List_1<T> {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>* New_ctor();

  static inline ::Amazon::Runtime::Internal::Util::AlwaysSendList_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysSendList_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlwaysSendList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysSendList_1(AlwaysSendList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysSendList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysSendList_1(AlwaysSendList_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::Internal::Util::AlwaysSendList_1, "Amazon.Runtime.Internal.Util", "AlwaysSendList`1");
