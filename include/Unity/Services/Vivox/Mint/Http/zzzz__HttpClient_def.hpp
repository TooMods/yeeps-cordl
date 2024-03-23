#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClient)
namespace GlobalNamespace {
struct __HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d;
}
namespace GlobalNamespace {
struct __HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
namespace Unity::Services::Vivox::Mint::Http {
class IHttpClient;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___CreateHttpClientResponse_d__4;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___CreateWebRequestAsync_d__3;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___CreateWebRequestAsync_d__5;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___MakeRequestAsync_d__1;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___MakeRequestAsync_d__2;
}
namespace Unity::Services::Vivox::Mint::Http {
class __HttpClient____c__DisplayClass4_0;
}
namespace Unity::Services::Vivox::Mint::Http {
class __HttpClient____c__DisplayClass5_0;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
class HttpClient;
}
namespace Unity::Services::Vivox::Mint::Http {
class __HttpClient____c__DisplayClass4_0;
}
namespace Unity::Services::Vivox::Mint::Http {
class __HttpClient____c__DisplayClass5_0;
}
namespace GlobalNamespace {
struct __HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d;
}
namespace GlobalNamespace {
struct __HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___CreateHttpClientResponse_d__4;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___CreateWebRequestAsync_d__3;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___CreateWebRequestAsync_d__5;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___MakeRequestAsync_d__1;
}
namespace Unity::Services::Vivox::Mint::Http {
struct __HttpClient___MakeRequestAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::HttpClient);
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0);
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0);
MARK_VAL_T(::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d);
MARK_VAL_T(::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d);
MARK_VAL_T(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4);
MARK_VAL_T(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3);
MARK_VAL_T(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5);
MARK_VAL_T(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1);
MARK_VAL_T(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2);
// Type: ::<MakeRequestAsync>d__1
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: true
// CS Name: ::HttpClient::<MakeRequestAsync>d__1
struct CORDL_TYPE __HttpClient___MakeRequestAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1702308, size 0x208, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1702510, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient___MakeRequestAsync_d__1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "url", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "body", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "headers", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __HttpClient___MakeRequestAsync_d__1(int32_t __1__state,
                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
                                                 ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this, ::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this;

  /// @brief Field method, offset: 0x28, size: 0x8, def value: None
  ::StringW method;

  /// @brief Field url, offset: 0x30, size: 0x8, def value: None
  ::StringW url;

  /// @brief Field body, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> body;

  /// @brief Field headers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field requestTimeout, offset: 0x48, size: 0x4, def value: None
  int32_t requestTimeout;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, 0x58>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, url) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, body) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, headers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, requestTimeout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, __u__1) == 0x50, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: ::<MakeRequestAsync>d__2
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: true
// CS Name: ::HttpClient::<MakeRequestAsync>d__2
struct CORDL_TYPE __HttpClient___MakeRequestAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1702568, size 0x20c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1702774, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient___MakeRequestAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "url", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "body", ty: "::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*", modifiers: "", def_value:
  // None }, CppParam { name: "headers", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "requestTimeout", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "boundary", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __HttpClient___MakeRequestAsync_d__2(int32_t __1__state,
                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
                                                 ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this, ::StringW method, ::StringW url,
                                                 ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
                                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this;

  /// @brief Field method, offset: 0x28, size: 0x8, def value: None
  ::StringW method;

  /// @brief Field url, offset: 0x30, size: 0x8, def value: None
  ::StringW url;

  /// @brief Field body, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body;

  /// @brief Field headers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field requestTimeout, offset: 0x48, size: 0x4, def value: None
  int32_t requestTimeout;

  /// @brief Field boundary, offset: 0x50, size: 0x8, def value: None
  ::StringW boundary;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, url) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, body) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, headers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, requestTimeout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, boundary) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, __u__1) == 0x58, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: ::<CreateWebRequestAsync>d__3
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: true
// CS Name: ::HttpClient::<CreateWebRequestAsync>d__3
struct CORDL_TYPE __HttpClient___CreateWebRequestAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x17027cc, size 0x1e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x17029b0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient___CreateWebRequestAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "url", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "body", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "headers", ty:
  // "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __HttpClient___CreateWebRequestAsync_d__3(int32_t __1__state,
                                                      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
                                                      ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this, ::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this;

  /// @brief Field method, offset: 0x28, size: 0x8, def value: None
  ::StringW method;

  /// @brief Field url, offset: 0x30, size: 0x8, def value: None
  ::StringW url;

  /// @brief Field body, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> body;

  /// @brief Field headers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field requestTimeout, offset: 0x48, size: 0x4, def value: None
  int32_t requestTimeout;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, 0x58>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, url) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, body) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, headers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, requestTimeout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, __u__1) == 0x50, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: ::<<CreateHttpClientResponse>b__0>d
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::HttpClient::<>c__DisplayClass4_0::<<CreateHttpClientResponse>b__0>d
struct CORDL_TYPE __HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1702b04, size 0x824, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1703460, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*", modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "",
  // def_value: None }]
  constexpr __HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
      ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0* __4__this, ::UnityEngine::Networking::UnityWebRequest* _request_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0* __4__this;

  /// @brief Field <request>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _request_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d, _request_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::HttpClient::<>c__DisplayClass4_0*
class CORDL_TYPE __HttpClient____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  using __CreateHttpClientResponse_b__0_d = ::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d;

  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this;

  /// @brief Field body, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body))::ArrayW<uint8_t, ::Array<uint8_t>*> body;

  /// @brief Field headers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::StringW method;

  /// @brief Field requestTimeout, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_requestTimeout, put = __cordl_internal_set_requestTimeout)) int32_t requestTimeout;

  /// @brief Field url, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_url, put = __cordl_internal_set_url))::StringW url;

  static inline ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0* New_ctor();

  /// @brief Method <CreateHttpClientResponse>b__0, addr 0x1702a10, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* _CreateHttpClientResponse_b__0();

  constexpr ::Unity::Services::Vivox::Mint::Http::HttpClient*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::HttpClient*> const& __cordl_internal_get___4__this() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_body() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_body();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_headers() const;

  constexpr ::StringW const& __cordl_internal_get_method() const;

  constexpr ::StringW& __cordl_internal_get_method();

  constexpr int32_t const& __cordl_internal_get_requestTimeout() const;

  constexpr int32_t& __cordl_internal_get_requestTimeout();

  constexpr ::StringW const& __cordl_internal_get_url() const;

  constexpr ::StringW& __cordl_internal_get_url();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::Mint::Http::HttpClient* value);

  constexpr void __cordl_internal_set_body(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_method(::StringW value);

  constexpr void __cordl_internal_set_requestTimeout(int32_t value);

  constexpr void __cordl_internal_set_url(::StringW value);

  /// @brief Method .ctor, addr 0x1702a08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HttpClient____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpClient____c__DisplayClass4_0(__HttpClient____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpClient____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpClient____c__DisplayClass4_0(__HttpClient____c__DisplayClass4_0 const&) = delete;

  /// @brief Field url, offset: 0x10, size: 0x8, def value: None
  ::StringW ___url;

  /// @brief Field method, offset: 0x18, size: 0x8, def value: None
  ::StringW ___method;

  /// @brief Field headers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___headers;

  /// @brief Field requestTimeout, offset: 0x28, size: 0x4, def value: None
  int32_t ___requestTimeout;

  /// @brief Field body, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___body;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClient* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0, ___url) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0, ___method) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0, ___headers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0, ___requestTimeout) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0, ___body) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0, _____4__this) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: ::<CreateHttpClientResponse>d__4
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: true
// CS Name: ::HttpClient::<CreateHttpClientResponse>d__4
struct CORDL_TYPE __HttpClient___CreateHttpClientResponse_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x17034b8, size 0x464, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x170391c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient___CreateHttpClientResponse_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }, CppParam { name: "url", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "headers", ty:
  // "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "requestTimeout", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "body", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::Mint::Http::HttpClient*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __HttpClient___CreateHttpClientResponse_d__4(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder, ::StringW url, ::StringW method,
      ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
      ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder;

  /// @brief Field url, offset: 0x20, size: 0x8, def value: None
  ::StringW url;

  /// @brief Field method, offset: 0x28, size: 0x8, def value: None
  ::StringW method;

  /// @brief Field headers, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field requestTimeout, offset: 0x38, size: 0x4, def value: None
  int32_t requestTimeout;

  /// @brief Field body, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> body;

  /// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, 0x60>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, url) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, headers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, requestTimeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, body) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, __4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, __u__2) == 0x58, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: ::<<CreateWebRequestAsync>b__0>d
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::HttpClient::<>c__DisplayClass5_0::<<CreateWebRequestAsync>b__0>d
struct CORDL_TYPE __HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1703a6c, size 0x5fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1704068, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder,
      ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::HttpClient::<>c__DisplayClass5_0*
class CORDL_TYPE __HttpClient____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  using __CreateWebRequestAsync_b__0_d = ::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d;

  /// @brief Field <>4__this, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this;

  /// @brief Field body, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_body, put = __cordl_internal_set_body))::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body;

  /// @brief Field boundary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_boundary, put = __cordl_internal_set_boundary))::StringW boundary;

  /// @brief Field headers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_headers, put = __cordl_internal_set_headers))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field method, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::StringW method;

  /// @brief Field requestTimeout, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_requestTimeout, put = __cordl_internal_set_requestTimeout)) int32_t requestTimeout;

  /// @brief Field url, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_url, put = __cordl_internal_set_url))::StringW url;

  static inline ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0* New_ctor();

  /// @brief Method <CreateWebRequestAsync>b__0, addr 0x170397c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* _CreateWebRequestAsync_b__0();

  constexpr ::Unity::Services::Vivox::Mint::Http::HttpClient*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::HttpClient*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*& __cordl_internal_get_body();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*> const& __cordl_internal_get_body() const;

  constexpr ::StringW const& __cordl_internal_get_boundary() const;

  constexpr ::StringW& __cordl_internal_get_boundary();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_headers() const;

  constexpr ::StringW const& __cordl_internal_get_method() const;

  constexpr ::StringW& __cordl_internal_get_method();

  constexpr int32_t const& __cordl_internal_get_requestTimeout() const;

  constexpr int32_t& __cordl_internal_get_requestTimeout();

  constexpr ::StringW const& __cordl_internal_get_url() const;

  constexpr ::StringW& __cordl_internal_get_url();

  constexpr void __cordl_internal_set___4__this(::Unity::Services::Vivox::Mint::Http::HttpClient* value);

  constexpr void __cordl_internal_set_body(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* value);

  constexpr void __cordl_internal_set_boundary(::StringW value);

  constexpr void __cordl_internal_set_headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set_method(::StringW value);

  constexpr void __cordl_internal_set_requestTimeout(int32_t value);

  constexpr void __cordl_internal_set_url(::StringW value);

  /// @brief Method .ctor, addr 0x1703974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HttpClient____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpClient____c__DisplayClass5_0(__HttpClient____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpClient____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpClient____c__DisplayClass5_0(__HttpClient____c__DisplayClass5_0 const&) = delete;

  /// @brief Field boundary, offset: 0x10, size: 0x8, def value: None
  ::StringW ___boundary;

  /// @brief Field url, offset: 0x18, size: 0x8, def value: None
  ::StringW ___url;

  /// @brief Field method, offset: 0x20, size: 0x8, def value: None
  ::StringW ___method;

  /// @brief Field headers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___headers;

  /// @brief Field requestTimeout, offset: 0x30, size: 0x4, def value: None
  int32_t ___requestTimeout;

  /// @brief Field body, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* ___body;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClient* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, 0x48>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, ___boundary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, ___url) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, ___method) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, ___headers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, ___requestTimeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, ___body) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0, _____4__this) == 0x40, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: ::<CreateWebRequestAsync>d__5
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: true
// CS Name: ::HttpClient::<CreateWebRequestAsync>d__5
struct CORDL_TYPE __HttpClient___CreateWebRequestAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x17040c0, size 0x464, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1704524, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient___CreateWebRequestAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }, CppParam { name: "boundary", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "headers", ty: "::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "requestTimeout", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "body", ty: "::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::Mint::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>", modifiers: "", def_value: None }]
  constexpr __HttpClient___CreateWebRequestAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder, ::StringW boundary, ::StringW url,
      ::StringW method, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout,
      ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body, ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __t__builder;

  /// @brief Field boundary, offset: 0x20, size: 0x8, def value: None
  ::StringW boundary;

  /// @brief Field url, offset: 0x28, size: 0x8, def value: None
  ::StringW url;

  /// @brief Field method, offset: 0x30, size: 0x8, def value: None
  ::StringW method;

  /// @brief Field headers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers;

  /// @brief Field requestTimeout, offset: 0x40, size: 0x4, def value: None
  int32_t requestTimeout;

  /// @brief Field body, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body;

  /// @brief Field <>4__this, offset: 0x50, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Http::HttpClient* __4__this;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, 0x68>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, boundary) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, method) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, requestTimeout) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, body) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, __4__this) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, __u__2) == 0x60, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
// Type: Unity.Services.Vivox.Mint.Http::HttpClient
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::HttpClient*
class CORDL_TYPE HttpClient : public ::System::Object {
public:
  // Declarations
  using _CreateHttpClientResponse_d__4 = ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4;

  using _CreateWebRequestAsync_d__3 = ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3;

  using _CreateWebRequestAsync_d__5 = ::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5;

  using _MakeRequestAsync_d__1 = ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1;

  using _MakeRequestAsync_d__2 = ::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2;

  using __c__DisplayClass4_0 = ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0;

  /// @brief Convert operator to "::Unity::Services::Vivox::Mint::Http::IHttpClient"
  constexpr operator ::Unity::Services::Vivox::Mint::Http::IHttpClient*() noexcept;

  /// @brief Method CreateHttpClientResponse, addr 0x1701f38, size 0x124, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
  CreateHttpClientResponse(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers,
                           int32_t requestTimeout);

  /// @brief Method CreateWebRequestAsync, addr 0x1701e10, size 0x128, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
  CreateWebRequestAsync(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers,
                        int32_t requestTimeout);

  /// @brief Method CreateWebRequestAsync, addr 0x170205c, size 0x138, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
  CreateWebRequestAsync(::StringW method, ::StringW url, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
                        ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary);

  /// @brief Method MakeRequestAsync, addr 0x1701bb4, size 0x128, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
  MakeRequestAsync(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout);

  /// @brief Method MakeRequestAsync, addr 0x1701cdc, size 0x134, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
  MakeRequestAsync(::StringW method, ::StringW url, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
                   ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary);

  static inline ::Unity::Services::Vivox::Mint::Http::HttpClient* New_ctor();

  /// @brief Method SendWebRequest, addr 0x17022f0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest(::UnityEngine::Networking::UnityWebRequest* request);

  /// @brief Method SetupMultipartRequest, addr 0x1702194, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::UnityWebRequest* SetupMultipartRequest(::UnityEngine::Networking::UnityWebRequest* request,
                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* multipartFormSections,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> boundary);

  /// @brief Method .ctor, addr 0x1701a74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Services::Vivox::Mint::Http::IHttpClient"
  constexpr ::Unity::Services::Vivox::Mint::Http::IHttpClient* i___Unity__Services__Vivox__Mint__Http__IHttpClient() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClient(HttpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClient(HttpClient const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Http::HttpClient, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Http
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::HttpClient);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::HttpClient*, "Unity.Services.Vivox.Mint.Http", "HttpClient");
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass4_0*, "Unity.Services.Vivox.Mint.Http", "HttpClient/<>c__DisplayClass4_0");
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__HttpClient____c__DisplayClass5_0*, "Unity.Services.Vivox.Mint.Http", "HttpClient/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HttpClient____c__DisplayClass4_0____CreateHttpClientResponse_b__0_d, "Unity.Services.Vivox.Mint.Http",
                       "HttpClient/<>c__DisplayClass4_0/<<CreateHttpClientResponse>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HttpClient____c__DisplayClass5_0____CreateWebRequestAsync_b__0_d, "Unity.Services.Vivox.Mint.Http",
                       "HttpClient/<>c__DisplayClass5_0/<<CreateWebRequestAsync>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateHttpClientResponse_d__4, "Unity.Services.Vivox.Mint.Http", "HttpClient/<CreateHttpClientResponse>d__4");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__3, "Unity.Services.Vivox.Mint.Http", "HttpClient/<CreateWebRequestAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__HttpClient___CreateWebRequestAsync_d__5, "Unity.Services.Vivox.Mint.Http", "HttpClient/<CreateWebRequestAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__1, "Unity.Services.Vivox.Mint.Http", "HttpClient/<MakeRequestAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Http::__HttpClient___MakeRequestAsync_d__2, "Unity.Services.Vivox.Mint.Http", "HttpClient/<MakeRequestAsync>d__2");
