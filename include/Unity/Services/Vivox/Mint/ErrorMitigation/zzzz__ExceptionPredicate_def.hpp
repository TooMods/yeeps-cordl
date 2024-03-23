#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExceptionPredicate)
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
class ExceptionPredicate;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate);
// Type: Unity.Services.Vivox.Mint.ErrorMitigation::ExceptionPredicate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::ErrorMitigation {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.ErrorMitigation::ExceptionPredicate*
class CORDL_TYPE ExceptionPredicate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1707670, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Exception* ex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1707690, size 0xc, virtual true, abstract: false, final false
  inline ::System::Exception* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x170765c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Exception* Invoke(::System::Exception* ex);

  static inline ::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1707530, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionPredicate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionPredicate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionPredicate(ExceptionPredicate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionPredicate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionPredicate(ExceptionPredicate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate, 0x80>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::ErrorMitigation
NEED_NO_BOX(::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::ErrorMitigation::ExceptionPredicate*, "Unity.Services.Vivox.Mint.ErrorMitigation", "ExceptionPredicate");
