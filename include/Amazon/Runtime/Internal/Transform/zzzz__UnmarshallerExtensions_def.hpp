#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnmarshallerExtensions)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Transform {
class UnmarshallerExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Transform::UnmarshallerExtensions);
// Type: Amazon.Runtime.Internal.Transform::UnmarshallerExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Transform {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Transform::UnmarshallerExtensions*
class CORDL_TYPE UnmarshallerExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void Add(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmarshallerExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnmarshallerExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnmarshallerExtensions(UnmarshallerExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnmarshallerExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnmarshallerExtensions(UnmarshallerExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Transform::UnmarshallerExtensions, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Transform
NEED_NO_BOX(::Amazon::Runtime::Internal::Transform::UnmarshallerExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Transform::UnmarshallerExtensions*, "Amazon.Runtime.Internal.Transform", "UnmarshallerExtensions");
