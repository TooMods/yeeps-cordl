#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncRequestContext)
namespace Amazon::Runtime {
class IRequestContext;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class IAsyncRequestContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IAsyncRequestContext);
// Type: Amazon.Runtime::IAsyncRequestContext
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IAsyncRequestContext*
class CORDL_TYPE IAsyncRequestContext {
public:
  // Declarations
  __declspec(property(get = get_Callback))::System::AsyncCallback* Callback;

  __declspec(property(get = get_State))::System::Object* State;

  /// @brief Convert operator to "::Amazon::Runtime::IRequestContext"
  constexpr operator ::Amazon::Runtime::IRequestContext*() noexcept;

  /// @brief Method get_Callback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::AsyncCallback* get_Callback();

  /// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_State();

  /// @brief Convert to "::Amazon::Runtime::IRequestContext"
  constexpr ::Amazon::Runtime::IRequestContext* i___Amazon__Runtime__IRequestContext() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncRequestContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsyncRequestContext(IAsyncRequestContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncRequestContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncRequestContext(IAsyncRequestContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IAsyncRequestContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IAsyncRequestContext*, "Amazon.Runtime", "IAsyncRequestContext");
