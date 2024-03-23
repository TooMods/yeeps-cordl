#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_def.hpp"
#include "Unity/Services/Vivox/zzzz__VxTokenGen_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VivoxJWTTokenGen)
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
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
namespace Unity::Services::Vivox::Mint::Apis::Default {
class DefaultApiClient;
}
namespace Unity::Services::Vivox::Mint {
template <typename T> class Response_1;
}
namespace Unity::Services::Vivox {
class VivoxServiceInternal;
}
namespace Unity::Services::Vivox {
struct __VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6;
}
namespace Unity::Services::Vivox {
struct __VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5;
}
namespace Unity::Services::Vivox {
struct __VivoxJWTTokenGen___GetTokenAsync_d__4;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxJWTTokenGen;
}
namespace Unity::Services::Vivox {
struct __VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6;
}
namespace Unity::Services::Vivox {
struct __VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5;
}
namespace Unity::Services::Vivox {
struct __VivoxJWTTokenGen___GetTokenAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxJWTTokenGen);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5);
MARK_VAL_T(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4);
// Type: ::<GetTokenAsync>d__4
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxJWTTokenGen::<GetTokenAsync>d__4
struct CORDL_TYPE __VivoxJWTTokenGen___GetTokenAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c2a63c, size 0x690, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2accc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxJWTTokenGen___GetTokenAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxJWTTokenGen*",
  // modifiers: "", def_value: None }, CppParam { name: "issuer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expiration", ty: "::System::Nullable_1<::System::TimeSpan>",
  // modifiers: "", def_value: None }, CppParam { name: "targetUserUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "channelUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fromUserUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __VivoxJWTTokenGen___GetTokenAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                    ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this, ::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration,
                                                    ::StringW targetUserUri, ::StringW action, ::StringW channelUri, ::StringW fromUserUri,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this;

  /// @brief Field issuer, offset: 0x28, size: 0x8, def value: None
  ::StringW issuer;

  /// @brief Field expiration, offset: 0x30, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> expiration;

  /// @brief Field targetUserUri, offset: 0x40, size: 0x8, def value: None
  ::StringW targetUserUri;

  /// @brief Field action, offset: 0x48, size: 0x8, def value: None
  ::StringW action;

  /// @brief Field channelUri, offset: 0x50, size: 0x8, def value: None
  ::StringW channelUri;

  /// @brief Field fromUserUri, offset: 0x58, size: 0x8, def value: None
  ::StringW fromUserUri;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, 0x68>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, issuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, expiration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, targetUserUri) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, action) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, channelUri) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, fromUserUri) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, __u__1) == 0x60, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<FetchLoginMintTokenAsync>d__5
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxJWTTokenGen::<FetchLoginMintTokenAsync>d__5
struct CORDL_TYPE __VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c2ad24, size 0x384, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2b0a8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxJWTTokenGen*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers: "",
  // def_value: None }]
  constexpr __VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                               ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5, __u__1) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<FetchChannelJoinMintTokenAsync>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::VivoxJWTTokenGen::<FetchChannelJoinMintTokenAsync>d__6
struct CORDL_TYPE __VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1c2b100, size 0x394, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1c2b494, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Unity::Services::Vivox::VivoxJWTTokenGen*",
  // modifiers: "", def_value: None }, CppParam { name: "channelUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                                     ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this, ::StringW channelUri,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxJWTTokenGen* __4__this;

  /// @brief Field channelUri, offset: 0x28, size: 0x8, def value: None
  ::StringW channelUri;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6, 0x38>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6, channelUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6, __u__1) == 0x30, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::VivoxJWTTokenGen
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxJWTTokenGen*
class CORDL_TYPE VivoxJWTTokenGen : public ::Unity::Services::Vivox::VxTokenGen {
public:
  // Declarations
  using _FetchChannelJoinMintTokenAsync_d__6 = ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6;

  using _FetchLoginMintTokenAsync_d__5 = ::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5;

  using _GetTokenAsync_d__4 = ::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4;

  /// @brief Field m_MintApiClient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MintApiClient, put = __cordl_internal_set_m_MintApiClient))::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* m_MintApiClient;

  /// @brief Field m_VivoxService, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VivoxService, put = __cordl_internal_set_m_VivoxService))::Unity::Services::Vivox::VivoxServiceInternal* m_VivoxService;

  /// @brief Method FetchChannelJoinMintTokenAsync, addr 0x1c2a540, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* FetchChannelJoinMintTokenAsync(::StringW channelUri);

  /// @brief Method FetchLoginMintTokenAsync, addr 0x1c2a450, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* FetchLoginMintTokenAsync();

  /// @brief Method GetToken, addr 0x1c2a2fc, size 0x18, virtual true, abstract: false, final false
  inline ::StringW GetToken(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW targetUserUri, ::StringW action, ::StringW tokenKey, ::StringW channelUri,
                            ::StringW fromUserUri);

  /// @brief Method GetTokenAsync, addr 0x1c2a314, size 0x13c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetTokenAsync(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration, ::StringW targetUserUri, ::StringW action,
                                                                      ::StringW tokenKey, ::StringW channelUri, ::StringW fromUserUri);

  static inline ::Unity::Services::Vivox::VivoxJWTTokenGen* New_ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService);

  constexpr ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*& __cordl_internal_get_m_MintApiClient();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient*> const& __cordl_internal_get_m_MintApiClient() const;

  constexpr ::Unity::Services::Vivox::VivoxServiceInternal*& __cordl_internal_get_m_VivoxService();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::VivoxServiceInternal*> const& __cordl_internal_get_m_VivoxService() const;

  constexpr void __cordl_internal_set_m_MintApiClient(::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* value);

  constexpr void __cordl_internal_set_m_VivoxService(::Unity::Services::Vivox::VivoxServiceInternal* value);

  /// @brief Method .ctor, addr 0x1c23284, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::VivoxServiceInternal* vivoxService);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxJWTTokenGen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxJWTTokenGen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxJWTTokenGen(VivoxJWTTokenGen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxJWTTokenGen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxJWTTokenGen(VivoxJWTTokenGen const&) = delete;

  /// @brief Field m_VivoxService, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::VivoxServiceInternal* ___m_VivoxService;

  /// @brief Field m_MintApiClient, offset: 0x18, size: 0x8, def value: None
  ::Unity::Services::Vivox::Mint::Apis::Default::DefaultApiClient* ___m_MintApiClient;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxJWTTokenGen, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxJWTTokenGen, ___m_VivoxService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::VivoxJWTTokenGen, ___m_MintApiClient) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxJWTTokenGen);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxJWTTokenGen*, "Unity.Services.Vivox", "VivoxJWTTokenGen");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchChannelJoinMintTokenAsync_d__6, "Unity.Services.Vivox", "VivoxJWTTokenGen/<FetchChannelJoinMintTokenAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxJWTTokenGen___FetchLoginMintTokenAsync_d__5, "Unity.Services.Vivox", "VivoxJWTTokenGen/<FetchLoginMintTokenAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__VivoxJWTTokenGen___GetTokenAsync_d__4, "Unity.Services.Vivox", "VivoxJWTTokenGen/<GetTokenAsync>d__4");
