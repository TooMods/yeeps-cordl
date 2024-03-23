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
CORDL_MODULE_EXPORT(EncryptUploadPartStream)
namespace Amazon::Runtime::Internal::Util {
class IEncryptionWrapper;
}
namespace Amazon::Runtime::Internal::Util {
struct __EncryptUploadPartStream___ReadAsync_d__12;
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
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class EncryptUploadPartStream;
}
namespace Amazon::Runtime::Internal::Util {
struct __EncryptUploadPartStream___ReadAsync_d__12;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::EncryptUploadPartStream);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12);
// Type: ::<ReadAsync>d__12
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::EncryptUploadPartStream::<ReadAsync>d__12
struct CORDL_TYPE __EncryptUploadPartStream___ReadAsync_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x243773c, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x243796c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EncryptUploadPartStream___ReadAsync_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::Util::EncryptUploadPartStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value:
  // None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __EncryptUploadPartStream___ReadAsync_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                        ::Amazon::Runtime::Internal::Util::EncryptUploadPartStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                        int32_t count, ::System::Threading::CancellationToken cancellationToken,
                                                        ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::EncryptUploadPartStream* __4__this;

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
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::EncryptUploadPartStream
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::EncryptUploadPartStream*
class CORDL_TYPE EncryptUploadPartStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  using _ReadAsync_d__12 = ::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12;

  __declspec(property(get = get_Algorithm, put = set_Algorithm))::Amazon::Runtime::Internal::Util::IEncryptionWrapper* Algorithm;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_InitializationVector, put = set_InitializationVector))::ArrayW<uint8_t, ::Array<uint8_t>*> InitializationVector;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field <Algorithm>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Algorithm_k__BackingField,
                      put = __cordl_internal_set__Algorithm_k__BackingField))::Amazon::Runtime::Internal::Util::IEncryptionWrapper* _Algorithm_k__BackingField;

  /// @brief Field <InitializationVector>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__InitializationVector_k__BackingField,
                      put = __cordl_internal_set__InitializationVector_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _InitializationVector_k__BackingField;

  /// @brief Field internalBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_internalBuffer, put = __cordl_internal_set_internalBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> internalBuffer;

  /// @brief Method Append, addr 0x23f58f0, size 0x154, virtual false, abstract: false, final false
  inline int32_t Append(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t readBytes);

  static inline ::Amazon::Runtime::Internal::Util::EncryptUploadPartStream* New_ctor(::System::IO::Stream* baseStream);

  /// @brief Method Read, addr 0x23f58b8, size 0x38, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x23f5a44, size 0x150, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Seek, addr 0x23f5c34, size 0xdc, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method ValidateBaseStream, addr 0x23f5828, size 0x90, virtual false, abstract: false, final false
  inline void ValidateBaseStream();

  constexpr ::Amazon::Runtime::Internal::Util::IEncryptionWrapper*& __cordl_internal_get__Algorithm_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::IEncryptionWrapper*> const& __cordl_internal_get__Algorithm_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__InitializationVector_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__InitializationVector_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_internalBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_internalBuffer();

  constexpr void __cordl_internal_set__Algorithm_k__BackingField(::Amazon::Runtime::Internal::Util::IEncryptionWrapper* value);

  constexpr void __cordl_internal_set__InitializationVector_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_internalBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method <>n__0, addr 0x23f5d10, size 0x1008, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* __n__0(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x23f57a8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream);

  /// @brief Method get_Algorithm, addr 0x23f5788, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::IEncryptionWrapper* get_Algorithm();

  /// @brief Method get_CanSeek, addr 0x23f5b94, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_InitializationVector, addr 0x23f5798, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_InitializationVector();

  /// @brief Method get_Length, addr 0x23f5b9c, size 0x64, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x23f5c00, size 0x20, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Algorithm, addr 0x23f5790, size 0x8, virtual false, abstract: false, final false
  inline void set_Algorithm(::Amazon::Runtime::Internal::Util::IEncryptionWrapper* value);

  /// @brief Method set_InitializationVector, addr 0x23f57a0, size 0x8, virtual false, abstract: false, final false
  inline void set_InitializationVector(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Position, addr 0x23f5c20, size 0x14, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptUploadPartStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptUploadPartStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptUploadPartStream(EncryptUploadPartStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptUploadPartStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptUploadPartStream(EncryptUploadPartStream const&) = delete;

  /// @brief Field <Algorithm>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::IEncryptionWrapper* ____Algorithm_k__BackingField;

  /// @brief Field internalBuffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___internalBuffer;

  /// @brief Field <InitializationVector>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____InitializationVector_k__BackingField;

  /// @brief Field InternalEncryptionBlockSize offset 0xffffffff size 0x4
  static constexpr int32_t InternalEncryptionBlockSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::EncryptUploadPartStream, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptUploadPartStream, ____Algorithm_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptUploadPartStream, ___internalBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptUploadPartStream, ____InitializationVector_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::EncryptUploadPartStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::EncryptUploadPartStream*, "Amazon.Runtime.Internal.Util", "EncryptUploadPartStream");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__EncryptUploadPartStream___ReadAsync_d__12, "Amazon.Runtime.Internal.Util", "EncryptUploadPartStream/<ReadAsync>d__12");
