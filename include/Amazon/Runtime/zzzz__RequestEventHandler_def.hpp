#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RequestEventHandler)
namespace Amazon::Runtime {
class RequestEventArgs;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class RequestEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::RequestEventHandler);
// Type: Amazon.Runtime::RequestEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::RequestEventHandler*
class CORDL_TYPE RequestEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x20209d8, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Amazon::Runtime::RequestEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2020a00, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x20209c4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::Amazon::Runtime::RequestEventArgs* e);

  static inline ::Amazon::Runtime::RequestEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2020894, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequestEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequestEventHandler(RequestEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequestEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequestEventHandler(RequestEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::RequestEventHandler, 0x80>, "Size mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::RequestEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::RequestEventHandler*, "Amazon.Runtime", "RequestEventHandler");
