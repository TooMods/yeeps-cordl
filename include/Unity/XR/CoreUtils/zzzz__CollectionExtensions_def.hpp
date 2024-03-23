#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class CollectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::CollectionExtensions);
// Type: Unity.XR.CoreUtils::CollectionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::CollectionExtensions*
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_String, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_String, put = setStaticF_k_String))::System::Text::StringBuilder* k_String;

  /// @brief Method Stringify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW Stringify(::System::Collections::Generic::ICollection_1<T>* collection);

  static inline ::System::Text::StringBuilder* getStaticF_k_String();

  static inline void setStaticF_k_String(::System::Text::StringBuilder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions(CollectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions(CollectionExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::CollectionExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::CollectionExtensions*, "Unity.XR.CoreUtils", "CollectionExtensions");
