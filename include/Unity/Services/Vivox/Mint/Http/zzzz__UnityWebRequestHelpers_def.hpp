#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityWebRequestHelpers)
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
namespace Unity::Services::Vivox::Mint::Http {
class __UnityWebRequestHelpers____c__DisplayClass0_0;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class UnityWebRequestHelpers;
}
namespace Unity::Services::Vivox::Mint::Http {
class __UnityWebRequestHelpers____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers);
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::UnityWebRequestHelpers::<>c__DisplayClass0_0*
class CORDL_TYPE __UnityWebRequestHelpers____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tcs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tcs,
                      put = __cordl_internal_set_tcs))::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* tcs;

  static inline ::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0* New_ctor();

  /// @brief Method <GetAwaiter>b__0, addr 0x1707478, size 0xb0, virtual false, abstract: false, final false
  inline void _GetAwaiter_b__0(::UnityEngine::AsyncOperation* obj);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*& __cordl_internal_get_tcs();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> const& __cordl_internal_get_tcs() const;

  constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* value);

  /// @brief Method .ctor, addr 0x1707364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityWebRequestHelpers____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestHelpers____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityWebRequestHelpers____c__DisplayClass0_0(__UnityWebRequestHelpers____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityWebRequestHelpers____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityWebRequestHelpers____c__DisplayClass0_0(__UnityWebRequestHelpers____c__DisplayClass0_0 const&) = delete;

  /// @brief Field tcs, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* ___tcs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0, ___tcs) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: Unity.Services.Vivox.Mint.Http::UnityWebRequestHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::UnityWebRequestHelpers*
class CORDL_TYPE UnityWebRequestHelpers : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0;

  /// @brief Method CreateHttpClientResponse, addr 0x170736c, size 0x10c, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::Mint::Http::HttpClientResponse* CreateHttpClientResponse(::UnityEngine::Networking::UnityWebRequestAsyncOperation* unityResponse);

  /// @brief Method GetAwaiter, addr 0x1703328, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>
  GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestHelpers(UnityWebRequestHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestHelpers(UnityWebRequestHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::UnityWebRequestHelpers*, "Unity.Services.Vivox.Mint.Http", "UnityWebRequestHelpers");
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__UnityWebRequestHelpers____c__DisplayClass0_0*, "Unity.Services.Vivox.Mint.Http", "UnityWebRequestHelpers/<>c__DisplayClass0_0");
