#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__ChunkedUploadWrapperStream_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__WrapperStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChunkedUploadWrapperStream)
namespace Amazon::Runtime::Internal::Auth {
class AWS4SigningResult;
}
namespace Amazon::Runtime::Internal::Util {
struct __ChunkedUploadWrapperStream__ReadStrategy;
}
namespace Amazon::Runtime::Internal::Util {
struct __ChunkedUploadWrapperStream___FillInputBufferAsync_d__18;
}
namespace Amazon::Runtime::Internal::Util {
struct __ChunkedUploadWrapperStream___ReadAsync_d__17;
}
namespace Amazon::Runtime::Internal::Util {
class __ChunkedUploadWrapperStream____c;
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
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
struct __ChunkedUploadWrapperStream__ReadStrategy;
}
namespace Amazon::Runtime::Internal::Util {
class ChunkedUploadWrapperStream;
}
namespace Amazon::Runtime::Internal::Util {
class __ChunkedUploadWrapperStream____c;
}
namespace Amazon::Runtime::Internal::Util {
struct __ChunkedUploadWrapperStream___FillInputBufferAsync_d__18;
}
namespace Amazon::Runtime::Internal::Util {
struct __ChunkedUploadWrapperStream___ReadAsync_d__17;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17);
// Type: ::ReadStrategy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::ChunkedUploadWrapperStream::ReadStrategy
struct CORDL_TYPE __ChunkedUploadWrapperStream__ReadStrategy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ChunkedUploadWrapperStream__ReadStrategy_Unwrapped
  enum struct ____ChunkedUploadWrapperStream__ReadStrategy_Unwrapped : int32_t {
    __E_ReadDirect = static_cast<int32_t>(0x0),
    __E_ReadAndCopy = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ChunkedUploadWrapperStream__ReadStrategy_Unwrapped() const noexcept {
    return static_cast<____ChunkedUploadWrapperStream__ReadStrategy_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChunkedUploadWrapperStream__ReadStrategy();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ChunkedUploadWrapperStream__ReadStrategy(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ReadAndCopy value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy const ReadAndCopy;

  /// @brief Field ReadDirect value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy const ReadDirect;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::ChunkedUploadWrapperStream::<>c*
class CORDL_TYPE __ChunkedUploadWrapperStream____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_2<::System::IO::Stream*, bool>* __9__14_0;

  static inline ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c* New_ctor();

  /// @brief Method <.ctor>b__14_0, addr 0x23f389c, size 0xb8, virtual false, abstract: false, final false
  inline bool __ctor_b__14_0(::System::IO::Stream* s);

  /// @brief Method .ctor, addr 0x23f3894, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c* getStaticF___9();

  static inline ::System::Func_2<::System::IO::Stream*, bool>* getStaticF___9__14_0();

  static inline void setStaticF___9(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::System::IO::Stream*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChunkedUploadWrapperStream____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChunkedUploadWrapperStream____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChunkedUploadWrapperStream____c(__ChunkedUploadWrapperStream____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChunkedUploadWrapperStream____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChunkedUploadWrapperStream____c(__ChunkedUploadWrapperStream____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: ::<ReadAsync>d__17
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::ChunkedUploadWrapperStream::<ReadAsync>d__17
struct CORDL_TYPE __ChunkedUploadWrapperStream___ReadAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23f3954, size 0x24c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23f3ba0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChunkedUploadWrapperStream___ReadAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __ChunkedUploadWrapperStream___ReadAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                           ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                           ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x38, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x3c, size: 0x4, def value: None
  int32_t count;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, count) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: ::<FillInputBufferAsync>d__18
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::ChunkedUploadWrapperStream::<FillInputBufferAsync>d__18
struct CORDL_TYPE __ChunkedUploadWrapperStream___FillInputBufferAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x23f3bf8, size 0x438, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x23f4030, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChunkedUploadWrapperStream___FillInputBufferAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "_inputBufferPos_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_readBuffer_5__3", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr __ChunkedUploadWrapperStream___FillInputBufferAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                                                      ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream* __4__this,
                                                                      ::System::Threading::CancellationToken cancellationToken, int32_t _inputBufferPos_5__2,
                                                                      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> _readBuffer_5__3) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <inputBufferPos>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t _inputBufferPos_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief Field <readBuffer>5__3, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _readBuffer_5__3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, _inputBufferPos_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, _readBuffer_5__3) == 0x48, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::ChunkedUploadWrapperStream
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::ChunkedUploadWrapperStream*
class CORDL_TYPE ChunkedUploadWrapperStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  using ReadStrategy = ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy;

  using _FillInputBufferAsync_d__18 = ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18;

  using _ReadAsync_d__17 = ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17;

  using __c = ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  /// @brief Field DefaultChunkSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DefaultChunkSize, put = setStaticF_DefaultChunkSize)) int32_t DefaultChunkSize;

  __declspec(property(get = get_HasLength)) bool HasLength;

  __declspec(property(get = get_HeaderSigningResult, put = set_HeaderSigningResult))::Amazon::Runtime::Internal::Auth::AWS4SigningResult* HeaderSigningResult;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_PreviousChunkSignature, put = set_PreviousChunkSignature))::StringW PreviousChunkSignature;

  /// @brief Field <HeaderSigningResult>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__HeaderSigningResult_k__BackingField,
                      put = __cordl_internal_set__HeaderSigningResult_k__BackingField))::Amazon::Runtime::Internal::Auth::AWS4SigningResult* _HeaderSigningResult_k__BackingField;

  /// @brief Field <PreviousChunkSignature>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__PreviousChunkSignature_k__BackingField,
                      put = __cordl_internal_set__PreviousChunkSignature_k__BackingField))::StringW _PreviousChunkSignature_k__BackingField;

  /// @brief Field _inputBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__inputBuffer, put = __cordl_internal_set__inputBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _inputBuffer;

  /// @brief Field _outputBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__outputBuffer, put = __cordl_internal_set__outputBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _outputBuffer;

  /// @brief Field _outputBufferDataLen, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__outputBufferDataLen, put = __cordl_internal_set__outputBufferDataLen)) int32_t _outputBufferDataLen;

  /// @brief Field _outputBufferIsTerminatingChunk, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get__outputBufferIsTerminatingChunk, put = __cordl_internal_set__outputBufferIsTerminatingChunk)) bool _outputBufferIsTerminatingChunk;

  /// @brief Field _outputBufferPos, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__outputBufferPos, put = __cordl_internal_set__outputBufferPos)) int32_t _outputBufferPos;

  /// @brief Field _readStrategy, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__readStrategy, put = __cordl_internal_set__readStrategy))::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy _readStrategy;

  /// @brief Field _wrappedStreamBufferSize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__wrappedStreamBufferSize, put = __cordl_internal_set__wrappedStreamBufferSize)) int32_t _wrappedStreamBufferSize;

  /// @brief Field _wrappedStreamConsumed, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__wrappedStreamConsumed, put = __cordl_internal_set__wrappedStreamConsumed)) bool _wrappedStreamConsumed;

  /// @brief Method AdjustBufferAfterReading, addr 0x23f2b84, size 0xac, virtual false, abstract: false, final false
  inline int32_t AdjustBufferAfterReading(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, int32_t bytesRead);

  /// @brief Method CalculateChunkHeaderLength, addr 0x23f28b0, size 0xe4, virtual false, abstract: false, final false
  static inline int64_t CalculateChunkHeaderLength(int64_t chunkDataSize);

  /// @brief Method ComputeChunkedContentLength, addr 0x23f3684, size 0x144, virtual false, abstract: false, final false
  static inline int64_t ComputeChunkedContentLength(int64_t originalLength);

  /// @brief Method ConstructOutputBufferChunk, addr 0x23f2c30, size 0x73c, virtual false, abstract: false, final false
  inline void ConstructOutputBufferChunk(int32_t dataLen);

  /// @brief Method FillInputBuffer, addr 0x23f2a14, size 0x170, virtual false, abstract: false, final false
  inline int32_t FillInputBuffer();

  /// @brief Method FillInputBufferAsync, addr 0x23f34bc, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* FillInputBufferAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream* New_ctor(::System::IO::Stream* stream, int32_t wrappedStreamBufferSize,
                                                                                        ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* headerSigningResult);

  /// @brief Method Read, addr 0x23f2994, size 0x80, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x23f336c, size 0x150, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  constexpr ::Amazon::Runtime::Internal::Auth::AWS4SigningResult*& __cordl_internal_get__HeaderSigningResult_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Auth::AWS4SigningResult*> const& __cordl_internal_get__HeaderSigningResult_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__PreviousChunkSignature_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PreviousChunkSignature_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__inputBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__inputBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__outputBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__outputBuffer();

  constexpr int32_t const& __cordl_internal_get__outputBufferDataLen() const;

  constexpr int32_t& __cordl_internal_get__outputBufferDataLen();

  constexpr bool const& __cordl_internal_get__outputBufferIsTerminatingChunk() const;

  constexpr bool& __cordl_internal_get__outputBufferIsTerminatingChunk();

  constexpr int32_t const& __cordl_internal_get__outputBufferPos() const;

  constexpr int32_t& __cordl_internal_get__outputBufferPos();

  constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy const& __cordl_internal_get__readStrategy() const;

  constexpr ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy& __cordl_internal_get__readStrategy();

  constexpr int32_t const& __cordl_internal_get__wrappedStreamBufferSize() const;

  constexpr int32_t& __cordl_internal_get__wrappedStreamBufferSize();

  constexpr bool const& __cordl_internal_get__wrappedStreamConsumed() const;

  constexpr bool& __cordl_internal_get__wrappedStreamConsumed();

  constexpr void __cordl_internal_set__HeaderSigningResult_k__BackingField(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value);

  constexpr void __cordl_internal_set__PreviousChunkSignature_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__inputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__outputBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__outputBufferDataLen(int32_t value);

  constexpr void __cordl_internal_set__outputBufferIsTerminatingChunk(bool value);

  constexpr void __cordl_internal_set__outputBufferPos(int32_t value);

  constexpr void __cordl_internal_set__readStrategy(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy value);

  constexpr void __cordl_internal_set__wrappedStreamBufferSize(int32_t value);

  constexpr void __cordl_internal_set__wrappedStreamConsumed(bool value);

  /// @brief Method .ctor, addr 0x23f26f4, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, int32_t wrappedStreamBufferSize, ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* headerSigningResult);

  static inline int32_t getStaticF_DefaultChunkSize();

  /// @brief Method get_CanSeek, addr 0x23f37c8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_HasLength, addr 0x23f37d0, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasLength();

  /// @brief Method get_HeaderSigningResult, addr 0x23f35e8, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* get_HeaderSigningResult();

  /// @brief Method get_Length, addr 0x23f3608, size 0x7c, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_PreviousChunkSignature, addr 0x23f35f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PreviousChunkSignature();

  static inline void setStaticF_DefaultChunkSize(int32_t value);

  /// @brief Method set_HeaderSigningResult, addr 0x23f35f0, size 0x8, virtual false, abstract: false, final false
  inline void set_HeaderSigningResult(::Amazon::Runtime::Internal::Auth::AWS4SigningResult* value);

  /// @brief Method set_PreviousChunkSignature, addr 0x23f3600, size 0x8, virtual false, abstract: false, final false
  inline void set_PreviousChunkSignature(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChunkedUploadWrapperStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChunkedUploadWrapperStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChunkedUploadWrapperStream(ChunkedUploadWrapperStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChunkedUploadWrapperStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChunkedUploadWrapperStream(ChunkedUploadWrapperStream const&) = delete;

  /// @brief Field _inputBuffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____inputBuffer;

  /// @brief Field _outputBuffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____outputBuffer;

  /// @brief Field _outputBufferPos, offset: 0x40, size: 0x4, def value: None
  int32_t ____outputBufferPos;

  /// @brief Field _outputBufferDataLen, offset: 0x44, size: 0x4, def value: None
  int32_t ____outputBufferDataLen;

  /// @brief Field _wrappedStreamBufferSize, offset: 0x48, size: 0x4, def value: None
  int32_t ____wrappedStreamBufferSize;

  /// @brief Field _wrappedStreamConsumed, offset: 0x4c, size: 0x1, def value: None
  bool ____wrappedStreamConsumed;

  /// @brief Field _outputBufferIsTerminatingChunk, offset: 0x4d, size: 0x1, def value: None
  bool ____outputBufferIsTerminatingChunk;

  /// @brief Field _readStrategy, offset: 0x50, size: 0x4, def value: None
  ::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy ____readStrategy;

  /// @brief Field <HeaderSigningResult>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Auth::AWS4SigningResult* ____HeaderSigningResult_k__BackingField;

  /// @brief Field <PreviousChunkSignature>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____PreviousChunkSignature_k__BackingField;

  /// @brief Field CHUNK_SIGNATURE_HEADER offset 0xffffffff size 0x8
  static constexpr ::ConstString CHUNK_SIGNATURE_HEADER{ u";chunk-signature=" };

  /// @brief Field CHUNK_STRING_TO_SIGN_PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString CHUNK_STRING_TO_SIGN_PREFIX{ u"AWS4-HMAC-SHA256-PAYLOAD" };

  /// @brief Field CLRF offset 0xffffffff size 0x8
  static constexpr ::ConstString CLRF{ u"\r\n" };

  /// @brief Field SIGNATURE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t SIGNATURE_LENGTH{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, 0x68>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____inputBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____outputBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____outputBufferPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____outputBufferDataLen) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____wrappedStreamBufferSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____wrappedStreamConsumed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____outputBufferIsTerminatingChunk) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____readStrategy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____HeaderSigningResult_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream, ____PreviousChunkSignature_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream__ReadStrategy, "Amazon.Runtime.Internal.Util", "ChunkedUploadWrapperStream/ReadStrategy");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::ChunkedUploadWrapperStream*, "Amazon.Runtime.Internal.Util", "ChunkedUploadWrapperStream");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream____c*, "Amazon.Runtime.Internal.Util", "ChunkedUploadWrapperStream/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___FillInputBufferAsync_d__18, "Amazon.Runtime.Internal.Util",
                       "ChunkedUploadWrapperStream/<FillInputBufferAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__ChunkedUploadWrapperStream___ReadAsync_d__17, "Amazon.Runtime.Internal.Util", "ChunkedUploadWrapperStream/<ReadAsync>d__17");
