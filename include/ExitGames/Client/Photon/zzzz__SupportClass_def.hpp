#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupportClass)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
template <typename K, typename V> class NonAllocDictionary_2;
}
namespace ExitGames::Client::Photon {
class __SupportClass__IntegerMillisecondsDelegate;
}
namespace ExitGames::Client::Photon {
class __SupportClass__ThreadSafeRandom;
}
namespace ExitGames::Client::Photon {
class __SupportClass____c;
}
namespace ExitGames::Client::Photon {
class __SupportClass____c__DisplayClass6_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class TextWriter;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Threading {
class Thread;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SupportClass;
}
namespace ExitGames::Client::Photon {
class __SupportClass__IntegerMillisecondsDelegate;
}
namespace ExitGames::Client::Photon {
class __SupportClass__ThreadSafeRandom;
}
namespace ExitGames::Client::Photon {
class __SupportClass____c;
}
namespace ExitGames::Client::Photon {
class __SupportClass____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::SupportClass);
MARK_REF_PTR_T(::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate);
MARK_REF_PTR_T(::ExitGames::Client::Photon::__SupportClass__ThreadSafeRandom);
MARK_REF_PTR_T(::ExitGames::Client::Photon::__SupportClass____c);
MARK_REF_PTR_T(::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0);
// Type: ::IntegerMillisecondsDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::SupportClass::IntegerMillisecondsDelegate*
class CORDL_TYPE __SupportClass__IntegerMillisecondsDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2ac0cc0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2ac0ce0, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2ac0cac, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke();

  static inline ::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ac0bf0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SupportClass__IntegerMillisecondsDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass__IntegerMillisecondsDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SupportClass__IntegerMillisecondsDelegate(__SupportClass__IntegerMillisecondsDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass__IntegerMillisecondsDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SupportClass__IntegerMillisecondsDelegate(__SupportClass__IntegerMillisecondsDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate, 0x80>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ::ThreadSafeRandom
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::SupportClass::ThreadSafeRandom*
class CORDL_TYPE __SupportClass__ThreadSafeRandom : public ::System::Object {
public:
  // Declarations
  /// @brief Field _r, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__r, put = setStaticF__r))::System::Random* _r;

  static inline ::ExitGames::Client::Photon::__SupportClass__ThreadSafeRandom* New_ctor();

  /// @brief Method Next, addr 0x2ac0d08, size 0x138, virtual false, abstract: false, final false
  static inline int32_t Next();

  /// @brief Method .ctor, addr 0x2ac0e40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Random* getStaticF__r();

  static inline void setStaticF__r(::System::Random* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SupportClass__ThreadSafeRandom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass__ThreadSafeRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SupportClass__ThreadSafeRandom(__SupportClass__ThreadSafeRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass__ThreadSafeRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SupportClass__ThreadSafeRandom(__SupportClass__ThreadSafeRandom const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__SupportClass__ThreadSafeRandom, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::SupportClass::<>c__DisplayClass6_0*
class CORDL_TYPE __SupportClass____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field millisecondsInterval, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_millisecondsInterval, put = __cordl_internal_set_millisecondsInterval)) int32_t millisecondsInterval;

  /// @brief Field myThread, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_myThread, put = __cordl_internal_set_myThread))::System::Func_1<bool>* myThread;

  static inline ::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0* New_ctor();

  /// @brief Method <StartBackgroundCalls>b__0, addr 0x2ac0ec0, size 0xb8, virtual false, abstract: false, final false
  inline void _StartBackgroundCalls_b__0();

  constexpr int32_t const& __cordl_internal_get_millisecondsInterval() const;

  constexpr int32_t& __cordl_internal_get_millisecondsInterval();

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_myThread();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __cordl_internal_get_myThread() const;

  constexpr void __cordl_internal_set_millisecondsInterval(int32_t value);

  constexpr void __cordl_internal_set_myThread(::System::Func_1<bool>* value);

  /// @brief Method .ctor, addr 0x2abe8c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SupportClass____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SupportClass____c__DisplayClass6_0(__SupportClass____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SupportClass____c__DisplayClass6_0(__SupportClass____c__DisplayClass6_0 const&) = delete;

  /// @brief Field millisecondsInterval, offset: 0x10, size: 0x4, def value: None
  int32_t ___millisecondsInterval;

  /// @brief Field myThread, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<bool>* ___myThread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0, ___millisecondsInterval) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0, ___myThread) == 0x18, "Offset mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::SupportClass::<>c*
class CORDL_TYPE __SupportClass____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::ExitGames::Client::Photon::__SupportClass____c* __9;

  static inline ::ExitGames::Client::Photon::__SupportClass____c* New_ctor();

  /// @brief Method <.cctor>b__20_0, addr 0x2ac0fe4, size 0x8, virtual false, abstract: false, final false
  inline int32_t __cctor_b__20_0();

  /// @brief Method .ctor, addr 0x2ac0fdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ExitGames::Client::Photon::__SupportClass____c* getStaticF___9();

  static inline void setStaticF___9(::ExitGames::Client::Photon::__SupportClass____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SupportClass____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SupportClass____c(__SupportClass____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SupportClass____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SupportClass____c(__SupportClass____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::__SupportClass____c, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
// Type: ExitGames.Client.Photon::SupportClass
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::SupportClass*
class CORDL_TYPE SupportClass : public ::System::Object {
public:
  // Declarations
  using IntegerMillisecondsDelegate = ::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate;

  using ThreadSafeRandom = ::ExitGames::Client::Photon::__SupportClass__ThreadSafeRandom;

  using __c = ::ExitGames::Client::Photon::__SupportClass____c;

  using __c__DisplayClass6_0 = ::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0;

  /// @brief Field IntegerMilliseconds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IntegerMilliseconds, put = setStaticF_IntegerMilliseconds))::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate* IntegerMilliseconds;

  /// @brief Field ThreadListLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ThreadListLock, put = setStaticF_ThreadListLock))::System::Object* ThreadListLock;

  /// @brief Field crcLookupTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crcLookupTable, put = setStaticF_crcLookupTable))::ArrayW<uint32_t, ::Array<uint32_t>*> crcLookupTable;

  /// @brief Field threadList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_threadList, put = setStaticF_threadList))::System::Collections::Generic::List_1<::System::Threading::Thread*>* threadList;

  /// @brief Method ByteArrayToString, addr 0x2ac0880, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW ByteArrayToString(::ArrayW<uint8_t, ::Array<uint8_t>*> list, int32_t length);

  /// @brief Method CalculateCrc, addr 0x2ac09bc, size 0x12c, virtual false, abstract: false, final false
  static inline uint32_t CalculateCrc(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t length);

  /// @brief Method DictionaryToString, addr 0x2abfd84, size 0xaa4, virtual false, abstract: false, final false
  static inline ::StringW DictionaryToString(::ExitGames::Client::Photon::NonAllocDictionary_2<uint8_t, ::System::Object*>* dictionary, bool includeTypes);

  /// @brief Method DictionaryToString, addr 0x2abef18, size 0xe6c, virtual false, abstract: false, final false
  static inline ::StringW DictionaryToString(::System::Collections::IDictionary* dictionary, bool includeTypes);

  /// @brief Method GetMethods, addr 0x2abe194, size 0x1d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* GetMethods(::System::Type* type, ::System::Type* attribute);

  /// @brief Method GetTickCount, addr 0x2abe368, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t GetTickCount();

  /// @brief Method HashtableToString, addr 0x2ac0828, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW HashtableToString(::ExitGames::Client::Photon::Hashtable* hash);

  /// @brief Method InitializeTable, addr 0x2ac0924, size 0x98, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> InitializeTable(uint32_t polynomial);

  static inline ::ExitGames::Client::Photon::SupportClass* New_ctor();

  /// @brief Method StartBackgroundCalls, addr 0x2abe3d4, size 0x4f4, virtual false, abstract: false, final false
  static inline uint8_t StartBackgroundCalls(::System::Func_1<bool>* myThread, int32_t millisecondsInterval, ::StringW taskName);

  /// @brief Method StopAllBackgroundCalls, addr 0x2abeb18, size 0x2fc, virtual false, abstract: false, final false
  static inline bool StopAllBackgroundCalls();

  /// @brief Method StopBackgroundCalls, addr 0x2abe8d0, size 0x248, virtual false, abstract: false, final false
  static inline bool StopBackgroundCalls(uint8_t id);

  /// @brief Method WriteStackTrace, addr 0x2abeec0, size 0x58, virtual false, abstract: false, final false
  static inline void WriteStackTrace(::System::Exception* throwable);

  /// @brief Method WriteStackTrace, addr 0x2abee14, size 0xac, virtual false, abstract: false, final false
  static inline void WriteStackTrace(::System::Exception* throwable, ::System::IO::TextWriter* stream);

  /// @brief Method .ctor, addr 0x2ac0ae8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate* getStaticF_IntegerMilliseconds();

  static inline ::System::Object* getStaticF_ThreadListLock();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_crcLookupTable();

  static inline ::System::Collections::Generic::List_1<::System::Threading::Thread*>* getStaticF_threadList();

  static inline void setStaticF_IntegerMilliseconds(::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate* value);

  static inline void setStaticF_ThreadListLock(::System::Object* value);

  static inline void setStaticF_crcLookupTable(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_threadList(::System::Collections::Generic::List_1<::System::Threading::Thread*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportClass(SupportClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportClass(SupportClass const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::SupportClass, 0x10>, "Size mismatch!");

} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::SupportClass);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SupportClass*, "ExitGames.Client.Photon", "SupportClass");
NEED_NO_BOX(::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__SupportClass__IntegerMillisecondsDelegate*, "ExitGames.Client.Photon", "SupportClass/IntegerMillisecondsDelegate");
NEED_NO_BOX(::ExitGames::Client::Photon::__SupportClass__ThreadSafeRandom);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__SupportClass__ThreadSafeRandom*, "ExitGames.Client.Photon", "SupportClass/ThreadSafeRandom");
NEED_NO_BOX(::ExitGames::Client::Photon::__SupportClass____c);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__SupportClass____c*, "ExitGames.Client.Photon", "SupportClass/<>c");
NEED_NO_BOX(::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::__SupportClass____c__DisplayClass6_0*, "ExitGames.Client.Photon", "SupportClass/<>c__DisplayClass6_0");
