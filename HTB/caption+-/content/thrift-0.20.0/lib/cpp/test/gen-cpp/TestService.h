/**
 * Autogenerated by Thrift Compiler (0.20.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TestService_H
#define TestService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "Recursive_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class TestServiceIf {
 public:
  virtual ~TestServiceIf() {}
  virtual void echoTree(RecTree& _return, const RecTree& tree) = 0;
  virtual void echoList(RecList& _return, const RecList& lst) = 0;
  virtual void echoCoRec(CoRec& _return, const CoRec& item) = 0;
};

class TestServiceIfFactory {
 public:
  typedef TestServiceIf Handler;

  virtual ~TestServiceIfFactory() {}

  virtual TestServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TestServiceIf* /* handler */) = 0;
  };

class TestServiceIfSingletonFactory : virtual public TestServiceIfFactory {
 public:
  TestServiceIfSingletonFactory(const ::std::shared_ptr<TestServiceIf>& iface) : iface_(iface) {}
  virtual ~TestServiceIfSingletonFactory() {}

  virtual TestServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) override {
    return iface_.get();
  }
  virtual void releaseHandler(TestServiceIf* /* handler */) override {}

 protected:
  ::std::shared_ptr<TestServiceIf> iface_;
};

class TestServiceNull : virtual public TestServiceIf {
 public:
  virtual ~TestServiceNull() {}
  void echoTree(RecTree& /* _return */, const RecTree& /* tree */) override {
    return;
  }
  void echoList(RecList& /* _return */, const RecList& /* lst */) override {
    return;
  }
  void echoCoRec(CoRec& /* _return */, const CoRec& /* item */) override {
    return;
  }
};

typedef struct _TestService_echoTree_args__isset {
  _TestService_echoTree_args__isset() : tree(false) {}
  bool tree :1;
} _TestService_echoTree_args__isset;

class TestService_echoTree_args {
 public:

  TestService_echoTree_args(const TestService_echoTree_args&);
  TestService_echoTree_args& operator=(const TestService_echoTree_args&);
  TestService_echoTree_args() noexcept {
  }

  virtual ~TestService_echoTree_args() noexcept;
  RecTree tree;

  _TestService_echoTree_args__isset __isset;

  void __set_tree(const RecTree& val);

  bool operator == (const TestService_echoTree_args & rhs) const
  {
    if (!(tree == rhs.tree))
      return false;
    return true;
  }
  bool operator != (const TestService_echoTree_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TestService_echoTree_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TestService_echoTree_pargs {
 public:


  virtual ~TestService_echoTree_pargs() noexcept;
  const RecTree* tree;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TestService_echoTree_result__isset {
  _TestService_echoTree_result__isset() : success(false) {}
  bool success :1;
} _TestService_echoTree_result__isset;

class TestService_echoTree_result {
 public:

  TestService_echoTree_result(const TestService_echoTree_result&);
  TestService_echoTree_result& operator=(const TestService_echoTree_result&);
  TestService_echoTree_result() noexcept {
  }

  virtual ~TestService_echoTree_result() noexcept;
  RecTree success;

  _TestService_echoTree_result__isset __isset;

  void __set_success(const RecTree& val);

  bool operator == (const TestService_echoTree_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TestService_echoTree_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TestService_echoTree_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TestService_echoTree_presult__isset {
  _TestService_echoTree_presult__isset() : success(false) {}
  bool success :1;
} _TestService_echoTree_presult__isset;

class TestService_echoTree_presult {
 public:


  virtual ~TestService_echoTree_presult() noexcept;
  RecTree* success;

  _TestService_echoTree_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TestService_echoList_args__isset {
  _TestService_echoList_args__isset() : lst(false) {}
  bool lst :1;
} _TestService_echoList_args__isset;

class TestService_echoList_args {
 public:

  TestService_echoList_args(const TestService_echoList_args&) noexcept;
  TestService_echoList_args& operator=(const TestService_echoList_args&) noexcept;
  TestService_echoList_args() noexcept {
  }

  virtual ~TestService_echoList_args() noexcept;
  RecList lst;

  _TestService_echoList_args__isset __isset;

  void __set_lst(const RecList& val);

  bool operator == (const TestService_echoList_args & rhs) const
  {
    if (!(lst == rhs.lst))
      return false;
    return true;
  }
  bool operator != (const TestService_echoList_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TestService_echoList_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TestService_echoList_pargs {
 public:


  virtual ~TestService_echoList_pargs() noexcept;
  const RecList* lst;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TestService_echoList_result__isset {
  _TestService_echoList_result__isset() : success(false) {}
  bool success :1;
} _TestService_echoList_result__isset;

class TestService_echoList_result {
 public:

  TestService_echoList_result(const TestService_echoList_result&) noexcept;
  TestService_echoList_result& operator=(const TestService_echoList_result&) noexcept;
  TestService_echoList_result() noexcept {
  }

  virtual ~TestService_echoList_result() noexcept;
  RecList success;

  _TestService_echoList_result__isset __isset;

  void __set_success(const RecList& val);

  bool operator == (const TestService_echoList_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TestService_echoList_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TestService_echoList_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TestService_echoList_presult__isset {
  _TestService_echoList_presult__isset() : success(false) {}
  bool success :1;
} _TestService_echoList_presult__isset;

class TestService_echoList_presult {
 public:


  virtual ~TestService_echoList_presult() noexcept;
  RecList* success;

  _TestService_echoList_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TestService_echoCoRec_args__isset {
  _TestService_echoCoRec_args__isset() : item(false) {}
  bool item :1;
} _TestService_echoCoRec_args__isset;

class TestService_echoCoRec_args {
 public:

  TestService_echoCoRec_args(const TestService_echoCoRec_args&) noexcept;
  TestService_echoCoRec_args& operator=(const TestService_echoCoRec_args&) noexcept;
  TestService_echoCoRec_args() noexcept {
  }

  virtual ~TestService_echoCoRec_args() noexcept;
  CoRec item;

  _TestService_echoCoRec_args__isset __isset;

  void __set_item(const CoRec& val);

  bool operator == (const TestService_echoCoRec_args & rhs) const
  {
    if (!(item == rhs.item))
      return false;
    return true;
  }
  bool operator != (const TestService_echoCoRec_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TestService_echoCoRec_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TestService_echoCoRec_pargs {
 public:


  virtual ~TestService_echoCoRec_pargs() noexcept;
  const CoRec* item;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TestService_echoCoRec_result__isset {
  _TestService_echoCoRec_result__isset() : success(false) {}
  bool success :1;
} _TestService_echoCoRec_result__isset;

class TestService_echoCoRec_result {
 public:

  TestService_echoCoRec_result(const TestService_echoCoRec_result&) noexcept;
  TestService_echoCoRec_result& operator=(const TestService_echoCoRec_result&) noexcept;
  TestService_echoCoRec_result() noexcept {
  }

  virtual ~TestService_echoCoRec_result() noexcept;
  CoRec success;

  _TestService_echoCoRec_result__isset __isset;

  void __set_success(const CoRec& val);

  bool operator == (const TestService_echoCoRec_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TestService_echoCoRec_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TestService_echoCoRec_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TestService_echoCoRec_presult__isset {
  _TestService_echoCoRec_presult__isset() : success(false) {}
  bool success :1;
} _TestService_echoCoRec_presult__isset;

class TestService_echoCoRec_presult {
 public:


  virtual ~TestService_echoCoRec_presult() noexcept;
  CoRec* success;

  _TestService_echoCoRec_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class TestServiceClient : virtual public TestServiceIf {
 public:
  TestServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TestServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void echoTree(RecTree& _return, const RecTree& tree) override;
  void send_echoTree(const RecTree& tree);
  void recv_echoTree(RecTree& _return);
  void echoList(RecList& _return, const RecList& lst) override;
  void send_echoList(const RecList& lst);
  void recv_echoList(RecList& _return);
  void echoCoRec(CoRec& _return, const CoRec& item) override;
  void send_echoCoRec(const CoRec& item);
  void recv_echoCoRec(CoRec& _return);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TestServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<TestServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) override;
 private:
  typedef  void (TestServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_echoTree(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_echoList(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_echoCoRec(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TestServiceProcessor(::std::shared_ptr<TestServiceIf> iface) :
    iface_(iface) {
    processMap_["echoTree"] = &TestServiceProcessor::process_echoTree;
    processMap_["echoList"] = &TestServiceProcessor::process_echoList;
    processMap_["echoCoRec"] = &TestServiceProcessor::process_echoCoRec;
  }

  virtual ~TestServiceProcessor() {}
};

class TestServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TestServiceProcessorFactory(const ::std::shared_ptr< TestServiceIfFactory >& handlerFactory) noexcept :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) override;

 protected:
  ::std::shared_ptr< TestServiceIfFactory > handlerFactory_;
};

class TestServiceMultiface : virtual public TestServiceIf {
 public:
  TestServiceMultiface(std::vector<std::shared_ptr<TestServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TestServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<TestServiceIf> > ifaces_;
  TestServiceMultiface() {}
  void add(::std::shared_ptr<TestServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void echoTree(RecTree& _return, const RecTree& tree) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->echoTree(_return, tree);
    }
    ifaces_[i]->echoTree(_return, tree);
    return;
  }

  void echoList(RecList& _return, const RecList& lst) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->echoList(_return, lst);
    }
    ifaces_[i]->echoList(_return, lst);
    return;
  }

  void echoCoRec(CoRec& _return, const CoRec& item) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->echoCoRec(_return, item);
    }
    ifaces_[i]->echoCoRec(_return, item);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class TestServiceConcurrentClient : virtual public TestServiceIf {
 public:
  TestServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  TestServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void echoTree(RecTree& _return, const RecTree& tree) override;
  int32_t send_echoTree(const RecTree& tree);
  void recv_echoTree(RecTree& _return, const int32_t seqid);
  void echoList(RecList& _return, const RecList& lst) override;
  int32_t send_echoList(const RecList& lst);
  void recv_echoList(RecList& _return, const int32_t seqid);
  void echoCoRec(CoRec& _return, const CoRec& item) override;
  int32_t send_echoCoRec(const CoRec& item);
  void recv_echoCoRec(CoRec& _return, const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr< ::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif
