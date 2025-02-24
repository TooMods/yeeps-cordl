#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DelegateUtility)
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class DelegateUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DelegateUtility);
// Type: ::DelegateUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DelegateUtility*
class CORDL_TYPE DelegateUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method Invoke, addr 0xf2745c, size 0x1f4, virtual false, abstract: false, final false
  static inline void Invoke(::StringW callbackName, ::System::Delegate* del, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateUtility(DelegateUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateUtility(DelegateUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DelegateUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DelegateUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DelegateUtility*, "", "DelegateUtility");
