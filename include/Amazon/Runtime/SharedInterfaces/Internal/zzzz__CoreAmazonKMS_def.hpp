#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/SharedInterfaces/zzzz__GenerateDataKeyResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreAmazonKMS)
namespace Amazon::Runtime::SharedInterfaces::Internal {
struct __CoreAmazonKMS___DecryptAsync_d__8;
}
namespace Amazon::Runtime::SharedInterfaces::Internal {
struct __CoreAmazonKMS___GenerateDataKeyAsync_d__9;
}
namespace Amazon::Runtime::SharedInterfaces {
class GenerateDataKeyResult;
}
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonKMS;
}
namespace Amazon::Runtime {
class AmazonServiceClient;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces::Internal {
class CoreAmazonKMS;
}
namespace Amazon::Runtime::SharedInterfaces::Internal {
struct __CoreAmazonKMS___DecryptAsync_d__8;
}
namespace Amazon::Runtime::SharedInterfaces::Internal {
struct __CoreAmazonKMS___GenerateDataKeyAsync_d__9;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS);
MARK_VAL_T(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8);
MARK_VAL_T(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9);
// Type: ::<DecryptAsync>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces::Internal {
// Is value type: true
// CS Name: ::CoreAmazonKMS::<DecryptAsync>d__8
struct CORDL_TYPE __CoreAmazonKMS___DecryptAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2021e14, size 0x290, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x20220a4, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreAmazonKMS___DecryptAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*", modifiers: "", def_value: None }, CppParam { name: "ciphertextBlob", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "encryptionContext", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }]
  constexpr __CoreAmazonKMS___DecryptAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder,
                                                ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext,
                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* __4__this;

  /// @brief Field ciphertextBlob, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob;

  /// @brief Field encryptionContext, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, ciphertextBlob) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, encryptionContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::SharedInterfaces::Internal
// Type: ::<GenerateDataKeyAsync>d__9
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces::Internal {
// Is value type: true
// CS Name: ::CoreAmazonKMS::<GenerateDataKeyAsync>d__9
struct CORDL_TYPE __CoreAmazonKMS___GenerateDataKeyAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x20220fc, size 0x298, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2022394, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreAmazonKMS___GenerateDataKeyAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*", modifiers: "", def_value: None }, CppParam { name: "keyID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "encryptionContext", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None }, CppParam { name: "keySpec", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>", modifiers: "", def_value: None }]
  constexpr __CoreAmazonKMS___GenerateDataKeyAsync_d__9(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*> __t__builder,
      ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* __4__this, ::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext,
      ::StringW keySpec, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* __4__this;

  /// @brief Field keyID, offset: 0x28, size: 0x8, def value: None
  ::StringW keyID;

  /// @brief Field encryptionContext, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext;

  /// @brief Field keySpec, offset: 0x38, size: 0x8, def value: None
  ::StringW keySpec;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, keyID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, encryptionContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, keySpec) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::SharedInterfaces::Internal
// Type: Amazon.Runtime.SharedInterfaces.Internal::CoreAmazonKMS
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces.Internal::CoreAmazonKMS*
class CORDL_TYPE CoreAmazonKMS : public ::System::Object {
public:
  // Declarations
  using _DecryptAsync_d__8 = ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8;

  using _GenerateDataKeyAsync_d__9 = ::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9;

  /// @brief Field disposed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_disposed, put = __cordl_internal_set_disposed)) bool disposed;

  /// @brief Field existingClient, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_existingClient, put = __cordl_internal_set_existingClient))::Amazon::Runtime::AmazonServiceClient* existingClient;

  /// @brief Field feature, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_feature, put = __cordl_internal_set_feature))::StringW feature;

  /// @brief Field wrappedClient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_wrappedClient, put = __cordl_internal_set_wrappedClient))::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* wrappedClient;

  /// @brief Field wrappedClientLock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_wrappedClientLock, put = __cordl_internal_set_wrappedClientLock))::System::Object* wrappedClientLock;

  /// @brief Convert operator to "::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS"
  constexpr operator ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateFromExistingClient, addr 0x2021a88, size 0x1ac, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* CreateFromExistingClient(::Amazon::Runtime::AmazonServiceClient* existingClient, ::StringW feature);

  /// @brief Method Decrypt, addr 0x20215a4, size 0xc4, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext);

  /// @brief Method DecryptAsync, addr 0x2021810, size 0x134, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* DecryptAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
                                                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext);

  /// @brief Method Dispose, addr 0x2021c34, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2021ca0, size 0x174, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnsureWrappedClientIsInstantiated, addr 0x2021668, size 0xe0, virtual false, abstract: false, final false
  inline void EnsureWrappedClientIsInstantiated();

  /// @brief Method GenerateDataKey, addr 0x2021748, size 0xc8, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult* GenerateDataKey(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext,
                                                                                     ::StringW keySpec);

  /// @brief Method GenerateDataKeyAsync, addr 0x2021944, size 0x144, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>*
  GenerateDataKeyAsync(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext, ::StringW keySpec);

  static inline ::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS* New_ctor(::Amazon::Runtime::AmazonServiceClient* existingClient, ::StringW feature);

  constexpr bool const& __cordl_internal_get_disposed() const;

  constexpr bool& __cordl_internal_get_disposed();

  constexpr ::Amazon::Runtime::AmazonServiceClient*& __cordl_internal_get_existingClient();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonServiceClient*> const& __cordl_internal_get_existingClient() const;

  constexpr ::StringW const& __cordl_internal_get_feature() const;

  constexpr ::StringW& __cordl_internal_get_feature();

  constexpr ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*& __cordl_internal_get_wrappedClient();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*> const& __cordl_internal_get_wrappedClient() const;

  constexpr ::System::Object*& __cordl_internal_get_wrappedClientLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_wrappedClientLock() const;

  constexpr void __cordl_internal_set_disposed(bool value);

  constexpr void __cordl_internal_set_existingClient(::Amazon::Runtime::AmazonServiceClient* value);

  constexpr void __cordl_internal_set_feature(::StringW value);

  constexpr void __cordl_internal_set_wrappedClient(::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* value);

  constexpr void __cordl_internal_set_wrappedClientLock(::System::Object* value);

  /// @brief Method .ctor, addr 0x2021524, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::AmazonServiceClient* existingClient, ::StringW feature);

  /// @brief Convert to "::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS"
  constexpr ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* i___Amazon__Runtime__SharedInterfaces__ICoreAmazonKMS() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreAmazonKMS();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreAmazonKMS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreAmazonKMS(CoreAmazonKMS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreAmazonKMS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreAmazonKMS(CoreAmazonKMS const&) = delete;

  /// @brief Field wrappedClientLock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___wrappedClientLock;

  /// @brief Field wrappedClient, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS* ___wrappedClient;

  /// @brief Field existingClient, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonServiceClient* ___existingClient;

  /// @brief Field feature, offset: 0x28, size: 0x8, def value: None
  ::StringW ___feature;

  /// @brief Field disposed, offset: 0x30, size: 0x1, def value: None
  bool ___disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS, ___wrappedClientLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS, ___wrappedClient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS, ___existingClient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS, ___feature) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS, ___disposed) == 0x30, "Offset mismatch!");

} // namespace Amazon::Runtime::SharedInterfaces::Internal
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::Internal::CoreAmazonKMS*, "Amazon.Runtime.SharedInterfaces.Internal", "CoreAmazonKMS");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___DecryptAsync_d__8, "Amazon.Runtime.SharedInterfaces.Internal", "CoreAmazonKMS/<DecryptAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::Internal::__CoreAmazonKMS___GenerateDataKeyAsync_d__9, "Amazon.Runtime.SharedInterfaces.Internal",
                       "CoreAmazonKMS/<GenerateDataKeyAsync>d__9");
