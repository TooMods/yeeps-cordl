#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessagePump)
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
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
struct TimeSpan;
}
namespace Unity::Services::Vivox {
class __MessagePump__DoneDelegate;
}
namespace Unity::Services::Vivox {
class __MessagePump__RunLoop;
}
namespace Unity::Services::Vivox {
class __MessagePump____c__DisplayClass11_0;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class MessagePump;
}
namespace Unity::Services::Vivox {
class __MessagePump__DoneDelegate;
}
namespace Unity::Services::Vivox {
class __MessagePump__RunLoop;
}
namespace Unity::Services::Vivox {
class __MessagePump____c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::MessagePump);
MARK_REF_PTR_T(::Unity::Services::Vivox::__MessagePump__DoneDelegate);
MARK_REF_PTR_T(::Unity::Services::Vivox::__MessagePump__RunLoop);
MARK_REF_PTR_T(::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0);
// Type: ::RunLoop
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::MessagePump::RunLoop*
class CORDL_TYPE __MessagePump__RunLoop : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2fc796c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<bool> didWork, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2fc79f8, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<bool> didWork, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2fc7958, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<bool> didWork);

  static inline ::Unity::Services::Vivox::__MessagePump__RunLoop* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2fc7884, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MessagePump__RunLoop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MessagePump__RunLoop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MessagePump__RunLoop(__MessagePump__RunLoop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MessagePump__RunLoop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MessagePump__RunLoop(__MessagePump__RunLoop const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__MessagePump__RunLoop, 0x80>, "Size mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::DoneDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::MessagePump::DoneDelegate*
class CORDL_TYPE __MessagePump__DoneDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2fc7ae4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2fc7b04, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2fc7ad0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::Unity::Services::Vivox::__MessagePump__DoneDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2fc7a14, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MessagePump__DoneDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MessagePump__DoneDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MessagePump__DoneDelegate(__MessagePump__DoneDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MessagePump__DoneDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MessagePump__DoneDelegate(__MessagePump__DoneDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__MessagePump__DoneDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Services::Vivox
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::MessagePump::<>c__DisplayClass11_0*
class CORDL_TYPE __MessagePump____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle))::System::Threading::WaitHandle* handle;

  /// @brief Field then, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_then, put = __cordl_internal_set_then))::System::DateTime then;

  static inline ::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0* New_ctor();

  /// @brief Method <Run>b__0, addr 0x2fc7b2c, size 0xc, virtual false, abstract: false, final false
  inline bool _Run_b__0();

  constexpr ::System::Threading::WaitHandle*& __cordl_internal_get_handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& __cordl_internal_get_handle() const;

  constexpr ::System::DateTime const& __cordl_internal_get_then() const;

  constexpr ::System::DateTime& __cordl_internal_get_then();

  constexpr void __cordl_internal_set_handle(::System::Threading::WaitHandle* value);

  constexpr void __cordl_internal_set_then(::System::DateTime value);

  /// @brief Method .ctor, addr 0x2fc787c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MessagePump____c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MessagePump____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MessagePump____c__DisplayClass11_0(__MessagePump____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MessagePump____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MessagePump____c__DisplayClass11_0(__MessagePump____c__DisplayClass11_0 const&) = delete;

  /// @brief Field handle, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::WaitHandle* ___handle;

  /// @brief Field then, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ___then;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0, ___then) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox
// Type: Unity.Services.Vivox::MessagePump
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::MessagePump*
class CORDL_TYPE MessagePump : public ::System::Object {
public:
  // Declarations
  using DoneDelegate = ::Unity::Services::Vivox::__MessagePump__DoneDelegate;

  using RunLoop = ::Unity::Services::Vivox::__MessagePump__RunLoop;

  using __c__DisplayClass11_0 = ::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0;

  /// @brief Field MainLoopRun, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_MainLoopRun, put = __cordl_internal_set_MainLoopRun))::Unity::Services::Vivox::__MessagePump__RunLoop* MainLoopRun;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Unity::Services::Vivox::MessagePump* _instance;

  /// @brief Method IsDone, addr 0x2fc6d94, size 0x90, virtual false, abstract: false, final false
  static inline bool IsDone(::System::Threading::WaitHandle* handle, ::System::DateTime until);

  static inline ::Unity::Services::Vivox::MessagePump* New_ctor();

  /// @brief Method Run, addr 0x2fc774c, size 0x130, virtual false, abstract: false, final false
  static inline bool Run(::System::Threading::WaitHandle* handle, ::System::TimeSpan until);

  /// @brief Method RunOnce, addr 0x2fc76f0, size 0x5c, virtual false, abstract: false, final false
  inline void RunOnce();

  /// @brief Method RunUntil, addr 0x2fc769c, size 0x54, virtual false, abstract: false, final false
  inline void RunUntil(::System::Func_1<bool>* done);

  constexpr ::Unity::Services::Vivox::__MessagePump__RunLoop*& __cordl_internal_get_MainLoopRun();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::__MessagePump__RunLoop*> const& __cordl_internal_get_MainLoopRun() const;

  constexpr void __cordl_internal_set_MainLoopRun(::Unity::Services::Vivox::__MessagePump__RunLoop* value);

  /// @brief Method .ctor, addr 0x2fc74dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_MainLoopRun, addr 0x2fc74e4, size 0x9c, virtual false, abstract: false, final false
  inline void add_MainLoopRun(::Unity::Services::Vivox::__MessagePump__RunLoop* value);

  static inline ::Unity::Services::Vivox::MessagePump* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x2fc761c, size 0x80, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::MessagePump* get_Instance();

  /// @brief Method remove_MainLoopRun, addr 0x2fc7580, size 0x9c, virtual false, abstract: false, final false
  inline void remove_MainLoopRun(::Unity::Services::Vivox::__MessagePump__RunLoop* value);

  static inline void setStaticF__instance(::Unity::Services::Vivox::MessagePump* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessagePump();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessagePump", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessagePump(MessagePump&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessagePump", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessagePump(MessagePump const&) = delete;

  /// @brief Field MainLoopRun, offset: 0x10, size: 0x8, def value: None
  ::Unity::Services::Vivox::__MessagePump__RunLoop* ___MainLoopRun;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::MessagePump, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::MessagePump, ___MainLoopRun) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::MessagePump);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::MessagePump*, "Unity.Services.Vivox", "MessagePump");
NEED_NO_BOX(::Unity::Services::Vivox::__MessagePump__DoneDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__MessagePump__DoneDelegate*, "Unity.Services.Vivox", "MessagePump/DoneDelegate");
NEED_NO_BOX(::Unity::Services::Vivox::__MessagePump__RunLoop);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__MessagePump__RunLoop*, "Unity.Services.Vivox", "MessagePump/RunLoop");
NEED_NO_BOX(::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::__MessagePump____c__DisplayClass11_0*, "Unity.Services.Vivox", "MessagePump/<>c__DisplayClass11_0");
