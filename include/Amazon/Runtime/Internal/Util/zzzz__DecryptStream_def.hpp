#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecryptStream)
namespace Amazon::Runtime::Internal::Util {
class IDecryptionWrapper;
}
namespace Amazon::Runtime::Internal::Util {
struct __DecryptStream___ReadAsync_d__10;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
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
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class DecryptStream;
}
namespace Amazon::Runtime::Internal::Util {
struct __DecryptStream___ReadAsync_d__10;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::DecryptStream);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10);
// Type: ::<ReadAsync>d__10
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::DecryptStream::<ReadAsync>d__10
struct CORDL_TYPE __DecryptStream___ReadAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23f4548, size 0x21c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23f4764, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DecryptStream___ReadAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::Util::DecryptStream*",
  // modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __DecryptStream___ReadAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                              ::Amazon::Runtime::Internal::Util::DecryptStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                              ::System::Threading::CancellationToken cancellationToken,
                                              ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::DecryptStream* __4__this;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x30, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x34, size: 0x4, def value: None
  int32_t count;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::DecryptStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::DecryptStream*
class CORDL_TYPE DecryptStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  using _ReadAsync_d__10 = ::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10;

  __declspec(property(get = get_Algorithm, put = set_Algorithm))::Amazon::Runtime::Internal::Util::IDecryptionWrapper* Algorithm;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CryptoStream, put = set_CryptoStream))::System::Security::Cryptography::CryptoStream* CryptoStream;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field <Algorithm>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Algorithm_k__BackingField,
                      put = __cordl_internal_set__Algorithm_k__BackingField))::Amazon::Runtime::Internal::Util::IDecryptionWrapper* _Algorithm_k__BackingField;

  /// @brief Field <CryptoStream>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__CryptoStream_k__BackingField,
                      put = __cordl_internal_set__CryptoStream_k__BackingField))::System::Security::Cryptography::CryptoStream* _CryptoStream_k__BackingField;

  static inline ::Amazon::Runtime::Internal::Util::DecryptStream* New_ctor(::System::IO::Stream* baseStream);

  /// @brief Method Read, addr 0x23f42dc, size 0x24, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x23f4300, size 0x150, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x23f44f8, size 0x50, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method ValidateBaseStream, addr 0x23f424c, size 0x90, virtual false, abstract: false, final false
  inline void ValidateBaseStream();

  constexpr ::Amazon::Runtime::Internal::Util::IDecryptionWrapper*& __cordl_internal_get__Algorithm_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::IDecryptionWrapper*> const& __cordl_internal_get__Algorithm_k__BackingField() const;

  constexpr ::System::Security::Cryptography::CryptoStream*& __cordl_internal_get__CryptoStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::CryptoStream*> const& __cordl_internal_get__CryptoStream_k__BackingField() const;

  constexpr void __cordl_internal_set__Algorithm_k__BackingField(::Amazon::Runtime::Internal::Util::IDecryptionWrapper* value);

  constexpr void __cordl_internal_set__CryptoStream_k__BackingField(::System::Security::Cryptography::CryptoStream* value);

  /// @brief Method .ctor, addr 0x23f4230, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream);

  /// @brief Method get_Algorithm, addr 0x23f4220, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::IDecryptionWrapper* get_Algorithm();

  /// @brief Method get_CanSeek, addr 0x23f4450, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CryptoStream, addr 0x23f4210, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::CryptoStream* get_CryptoStream();

  /// @brief Method get_Position, addr 0x23f4458, size 0x50, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Algorithm, addr 0x23f4228, size 0x8, virtual false, abstract: false, final false
  inline void set_Algorithm(::Amazon::Runtime::Internal::Util::IDecryptionWrapper* value);

  /// @brief Method set_CryptoStream, addr 0x23f4218, size 0x8, virtual false, abstract: false, final false
  inline void set_CryptoStream(::System::Security::Cryptography::CryptoStream* value);

  /// @brief Method set_Position, addr 0x23f44a8, size 0x50, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecryptStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecryptStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecryptStream(DecryptStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecryptStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecryptStream(DecryptStream const&) = delete;

  /// @brief Field <CryptoStream>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Security::Cryptography::CryptoStream* ____CryptoStream_k__BackingField;

  /// @brief Field <Algorithm>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::IDecryptionWrapper* ____Algorithm_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::DecryptStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::DecryptStream, ____CryptoStream_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::DecryptStream, ____Algorithm_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::DecryptStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::DecryptStream*, "Amazon.Runtime.Internal.Util", "DecryptStream");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__DecryptStream___ReadAsync_d__10, "Amazon.Runtime.Internal.Util", "DecryptStream/<ReadAsync>d__10");
