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
CORDL_MODULE_EXPORT(HashStream)
namespace Amazon::Runtime::Internal::Util {
class IHashingWrapper;
}
namespace Amazon::Runtime::Internal::Util {
struct __HashStream___ReadAsync_d__24;
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
class HashStream;
}
namespace Amazon::Runtime::Internal::Util {
struct __HashStream___ReadAsync_d__24;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::HashStream);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24);
// Type: ::<ReadAsync>d__24
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::HashStream::<ReadAsync>d__24
struct CORDL_TYPE __HashStream___ReadAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x24398d4, size 0x2d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2439ba8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HashStream___ReadAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Amazon::Runtime::Internal::Util::HashStream*",
  // modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
  constexpr __HashStream___ReadAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder,
                                           ::Amazon::Runtime::Internal::Util::HashStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                           ::System::Threading::CancellationToken cancellationToken,
                                           ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::HashStream* __4__this;

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
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, __u__1) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::HashStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::HashStream*
class CORDL_TYPE HashStream : public ::Amazon::Runtime::Internal::Util::WrapperStream {
public:
  // Declarations
  using _ReadAsync_d__24 = ::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24;

  __declspec(property(get = get_Algorithm, put = set_Algorithm))::Amazon::Runtime::Internal::Util::IHashingWrapper* Algorithm;

  __declspec(property(get = get_CalculatedHash, put = set_CalculatedHash))::ArrayW<uint8_t, ::Array<uint8_t>*> CalculatedHash;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CurrentPosition, put = set_CurrentPosition)) int64_t CurrentPosition;

  __declspec(property(get = get_ExpectedHash, put = set_ExpectedHash))::ArrayW<uint8_t, ::Array<uint8_t>*> ExpectedHash;

  __declspec(property(get = get_ExpectedLength, put = set_ExpectedLength)) int64_t ExpectedLength;

  __declspec(property(get = get_FinishedHashing)) bool FinishedHashing;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field <Algorithm>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Algorithm_k__BackingField,
                      put = __cordl_internal_set__Algorithm_k__BackingField))::Amazon::Runtime::Internal::Util::IHashingWrapper* _Algorithm_k__BackingField;

  /// @brief Field <CalculatedHash>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__CalculatedHash_k__BackingField,
                      put = __cordl_internal_set__CalculatedHash_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _CalculatedHash_k__BackingField;

  /// @brief Field <CurrentPosition>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentPosition_k__BackingField, put = __cordl_internal_set__CurrentPosition_k__BackingField)) int64_t _CurrentPosition_k__BackingField;

  /// @brief Field <ExpectedHash>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpectedHash_k__BackingField,
                      put = __cordl_internal_set__ExpectedHash_k__BackingField))::ArrayW<uint8_t, ::Array<uint8_t>*> _ExpectedHash_k__BackingField;

  /// @brief Field <ExpectedLength>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__ExpectedLength_k__BackingField, put = __cordl_internal_set__ExpectedLength_k__BackingField)) int64_t _ExpectedLength_k__BackingField;

  /// @brief Method CalculateHash, addr 0x2439698, size 0x174, virtual true, abstract: false, final false
  inline void CalculateHash();

  /// @brief Method CompareHashes, addr 0x243980c, size 0x80, virtual false, abstract: false, final false
  static inline bool CompareHashes(::ArrayW<uint8_t, ::Array<uint8_t>*> expected, ::ArrayW<uint8_t, ::Array<uint8_t>*> actual);

  /// @brief Method Dispose, addr 0x2439450, size 0x148, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::Internal::Util::HashStream* New_ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> expectedHash, int64_t expectedLength);

  /// @brief Method Read, addr 0x24391d8, size 0x104, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x2439300, size 0x150, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Reset, addr 0x24390d8, size 0x100, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Seek, addr 0x2439640, size 0x50, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method ValidateBaseStream, addr 0x2439048, size 0x90, virtual false, abstract: false, final false
  inline void ValidateBaseStream();

  constexpr ::Amazon::Runtime::Internal::Util::IHashingWrapper*& __cordl_internal_get__Algorithm_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::IHashingWrapper*> const& __cordl_internal_get__Algorithm_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__CalculatedHash_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__CalculatedHash_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__CurrentPosition_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__CurrentPosition_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__ExpectedHash_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__ExpectedHash_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__ExpectedLength_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__ExpectedLength_k__BackingField();

  constexpr void __cordl_internal_set__Algorithm_k__BackingField(::Amazon::Runtime::Internal::Util::IHashingWrapper* value);

  constexpr void __cordl_internal_set__CalculatedHash_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__CurrentPosition_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__ExpectedHash_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__ExpectedLength_k__BackingField(int64_t value);

  /// @brief Method <>n__0, addr 0x243988c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* __n__0(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x2439014, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> expectedHash, int64_t expectedLength);

  /// @brief Method get_Algorithm, addr 0x2438fb4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Util::IHashingWrapper* get_Algorithm();

  /// @brief Method get_CalculatedHash, addr 0x2438fe4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_CalculatedHash();

  /// @brief Method get_CanSeek, addr 0x2439598, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CurrentPosition, addr 0x2438fd4, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_CurrentPosition();

  /// @brief Method get_ExpectedHash, addr 0x2438ff4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_ExpectedHash();

  /// @brief Method get_ExpectedLength, addr 0x2439004, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ExpectedLength();

  /// @brief Method get_FinishedHashing, addr 0x2438fc4, size 0x10, virtual false, abstract: false, final false
  inline bool get_FinishedHashing();

  /// @brief Method get_Length, addr 0x2439690, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x24395a0, size 0x50, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method set_Algorithm, addr 0x2438fbc, size 0x8, virtual false, abstract: false, final false
  inline void set_Algorithm(::Amazon::Runtime::Internal::Util::IHashingWrapper* value);

  /// @brief Method set_CalculatedHash, addr 0x2438fec, size 0x8, virtual false, abstract: false, final false
  inline void set_CalculatedHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_CurrentPosition, addr 0x2438fdc, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentPosition(int64_t value);

  /// @brief Method set_ExpectedHash, addr 0x2438ffc, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpectedHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_ExpectedLength, addr 0x243900c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExpectedLength(int64_t value);

  /// @brief Method set_Position, addr 0x24395f0, size 0x50, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashStream(HashStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashStream(HashStream const&) = delete;

  /// @brief Field <Algorithm>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::IHashingWrapper* ____Algorithm_k__BackingField;

  /// @brief Field <CurrentPosition>k__BackingField, offset: 0x38, size: 0x8, def value: None
  int64_t ____CurrentPosition_k__BackingField;

  /// @brief Field <CalculatedHash>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____CalculatedHash_k__BackingField;

  /// @brief Field <ExpectedHash>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____ExpectedHash_k__BackingField;

  /// @brief Field <ExpectedLength>k__BackingField, offset: 0x50, size: 0x8, def value: None
  int64_t ____ExpectedLength_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::HashStream, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::HashStream, ____Algorithm_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::HashStream, ____CurrentPosition_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::HashStream, ____CalculatedHash_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::HashStream, ____ExpectedHash_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::HashStream, ____ExpectedLength_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::HashStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::HashStream*, "Amazon.Runtime.Internal.Util", "HashStream");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__HashStream___ReadAsync_d__24, "Amazon.Runtime.Internal.Util", "HashStream/<ReadAsync>d__24");
